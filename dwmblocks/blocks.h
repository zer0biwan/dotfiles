//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	     /*Command*/		 /*Update Interval*/	/*Update Signal*/

	/*{"^c#198388^^d^ ", "~/.local/bin/.m",	              60,		       1},*/
	
	{"^c#198388^^d^ ", "~/.local/bin/upt",		        60,		            2},
	{"^c#198388^^d^ ", "~/.local/bin/pacupdate",		360,		        9},
	{"^c#198388^^d^ ", "~/.local/bin/status_cpu",	       5,		       2},
	{"^c#198388^^d^ ", "~/.local/bin/status_mem",	       5,	               3},
	{"^c#198388^^d^ ", "~/.local/bin/status_disk",	      60,		      11},
	{"^c#198388^^d^ ", "~/.local/bin/network-ipinfo.io.sh",	        4444,		            8},
	{"  ", "~/.local/bin/mina-crypto.sh",	        42,		            4},
	{"  ", "~/.local/bin/xmr-crypto-color.sh",	        44,		            1},
	{"^c#ffbf00^^d^ ", "~/.local/bin/btc-crypto-color.sh",	        16,		            5},
	/*{"^c#198388^^d^ ", "~/.local/bin/status_vol",	       0,		      10},*/
	/*{"^c#198388^^d^ ", "~/.local/bin/status_date",	      60,		       6},*/
	//{"^c#198388^^d^ ", "~/.local/bin/weather",			30,		            7},
	{"^c#198388^^d^ ", "~/.local/bin/clock",			15,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;

/*
Given a positive integer n, return the count of the numbers of n-digit
positive integers that start or end with 1.
*/
#include<stdio.h>
using namespace std;
int starts_one_ends(int n){
	if(n==1)
		return 2;
	if(n==2)
		return 4;
	if(n==3)
		return 8;
	if(n==4)
		return 16;
	if(n==5)
		return 32;
	if(n==6)
		return 64;
	if(n==7)
		return 128;
	if(n==8)
		return 256;
	if(n==9)
		return 512;
	if(n==10)
		return 1024;
	if(n==11)
		return 2048;
	if(n==12)
		return 4096;
	if(n==13)
		return 8192;
	if(n==14)
		return 16384;
	if(n==15)
		return 32768;
	if(n==16)
		return 65536;
	if(n==17)
		return 131072;
	if(n==18)
		return 262144;
	if(n==19)
		return 524288;
	if(n==20)
		return 1048576;
	if(n==21)
		return 2097152;
	if(n==22)
		return 4194304;
	if(n==23)
		return 8388608;
	if(n==24)
		return 16777216;
	if(n==25)
		return 33554432;
	if(n==26)
		return 67108864;
	if(n==27)
		return 134217728;
	if(n==28)
		return 268435456;
	if(n==29)
		return 536870912;
	if(n==30)
		return 1073741824;
	if(n==31)
		return 2147483648;
	if(n==32)
		return 4294967296;
	if(n==33)
		return 8589934592;
	if(n==34)
		return 17179869184;
	if(n==35)
		return 34359738368;
	if(n==36)
		return 68719476736;
	if(n==37)
		return 137438953472;
	if(n==38)
		return 274877906944;
	if(n==39)
		return 549755813888;
	if(n==40)
		return 1099511627776;
	if(n==41)
		return 2199023255552;
	if(n==42)
		return 4398046511104;
	if(n==43)
		return 8796093022208;
	if(n==44)
		return 17592186044416;
	if(n==45)
		return 35184372088832;
	if(n==46)
		return 70368744177664;
	if(n==47)
		return 140737488355328;
	if(n==48)
		return 281474976710656;
	if(n==49)
		return 562949953421312;
	if(n==50)
		return 1125899906842624;
	if(n==51)
		return 2251799813685248;
	if(n==52)
		return 4503599627370496;
	if(n==53)
		return 9007199254740992;
	if(n==54)
		return 18014398509481984;
	if(n==55)
		return 36028797018963968;
	if(n==56)
		return 72057594037927936;
	if(n==57)
		return 144115188075855872;
	if(n==58)
		return 288230376151711744;
	if(n==59)
		return 576460752303423488;
	if(n==60)
		return 1152921504606846976;
	if(n==61)
		return 2305843009213693952;
	if(n==62)
		return 4611686018427387904;
	if(n==63)
		return 9223372036854775808;
	if(n==64)
		return 18446744073709551616;
	if(n==65)
		return 36893488147419103232;
	if(n==66)
		return 73786976294838206464;
	if(n==67)
		return 147573952589676412928;
	if(n==68)
		return 295147905179352825856;
	if(n==69)
		return 590295810358705651712;
	if(n==70)
		return 1180591620717411303424;
	if(n==71)
		return 2361183241434822606848;
	if(n==72)
		return 4722366482869645213696;
	if(n==73)
		return 9444732965739290427392;
	if(n==74)
		return 18889465931478580854784;
	if(n==75)
		return 37778931862957161709568;
	if(n==76)
		return 75557863725914323419136;
	if(n==77)
		return 151115727451828646838272;
	if(n==78)
		return 302231454903657293676544;
	if(n==79)
		return 604462909807314587353088;
	if(n==80)
		return 1208925819614629174706176;
	if(n==81)
		return 2417851639229258349412352;
	if(n==82)
		return 4835703278458516698824704;
	if(n==83)
		return 9671406556917033397649408;
	if(n==84)
		return 19342813113834066795298816;
	if(n==85)
		return 38685626227668133590597632;
	if(n==86)
		return 77371252455336267181195264;
	if(n==87)
		return 154742504910672534362390528;
	if(n==88)
		return 309485009821345068724781056;
	if(n==89)
		return 618970019642690137449562112;
	if(n==90)
		return 1237940039285380274899124224;
	if(n==91)
		return 2475880078570760549798248448;
	if(n==92)
		return 4951760157141521099596496896;
	if(n==93)
		return 9903520314283042199192993792;
	if(n==94)
		return 19807040628566084398385987584;
	if(n==95)
		return 396140812

/*
Return length of given string
>>> strlen("")
0
>>> strlen("abc")
3
*/
#include<stdio.h>
#include<string>
using namespace std;
int strlen(string str){
if(str.length()==0)
return 0;
else
return 1+strlen(str.substr(1));
}

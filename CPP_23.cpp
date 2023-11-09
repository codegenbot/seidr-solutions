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
int i = 0;
while(str[i] != '\0'){
i++;
}
return i;
}

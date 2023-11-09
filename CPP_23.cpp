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
	int length = 0;
	for(int i = 0; str[i] != '\0'; i++){
		length++;
	}
	return length;
}

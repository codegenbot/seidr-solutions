/*
Write a function that takes a message, and encodes in such a 
way that it swaps case of all letters, replaces all vowels in 
the message with the letter that appears 2 places ahead of that 
vowel in the english alphabet. 
Assume only letters. 

Examples:
>>> encode('test")
"TGST"
>>> encode("This is a message")
'tHKS KS C MGSSCGG"
*/
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
string encode(string message){
	string result="";
	for(int i=0;i<message.size();i++){
		if(message[i]>='a' && message[i]<='z'){
			result+=toupper(message[i]);
		}
		else if(message[i]>='A' && message[i]<='Z'){
			result+=tolower(message[i]);
		}
		else{
			result+=message[i];
		}
	}
	for(int i=0;i<result.size();i++){
		if(result[i]=='A' || result[i]=='E' || result[i]=='I' || result[i]=='O' || result[i]=='U'){
			result[i]+=2;
		}
		else if(result[i]=='Y'){
			result[i]='B';
		}
		else if(result[i]=='Z'){
			result[i]='C';
		}
	}
	return result;
}

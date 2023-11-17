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
	string result;
	for(int i=0;i<message.length();i++){
		if(message[i]>='a'&&message[i]<='z'){
			result+=message[i]-'a'+'A';
		}
		else if(message[i]>='A'&&message[i]<='Z'){
			result+=message[i]-'A'+'a';
		}
		else{
			result+=message[i];
		}
	}
	for(int i=0;i<result.length();i++){
		if(result[i]=='a'||result[i]=='e'||result[i]=='i'||result[i]=='o'||result[i]=='u'){
			result[i]+=2;
		}
		else if(result[i]=='c'||result[i]=='d'||result[i]=='f'||result[i]=='g'||result[i]=='h'||result[i]=='j'||result[i]=='k'||result[i]=='l'||result[i]=='m'||result[i]=='n'||result[i]=='p'||result[i]=='q'||result[i]=='r'||result[i]=='s'||result[i]=='t'||result[i]=='v'||result[i]=='w'||result[i]=='x'||result[i]=='y'||result[i]=='z'){
			result[i]+=1;
		}
		else if(result[i]=='b'){
			result[i]='d';
		}
		else if(result[i]=='B'){
			result[i]='D';
		}
		else if(result[i]=='A'){
			result[i]='C';
		}
		else if(result[i]=='E'){
			result[i]='G';
		}
		else if(result[i]=='I'){
			result[i]='K';
		}
		else if(result[i]=='O'){
			result[i]='Q';
		}
		else if(result[i]=='U'){
			result[i]='W';
		}
		else if(result[i]=='Y'){
			result[i]='A';
		}
		else if(result[i]=='Z'){
			result[i]='B';
		}
	}
	return result;
}
int main(){
	string message;
	getline(cin,message);
	cout<<encode(message)<<endl;
	return 0;
}

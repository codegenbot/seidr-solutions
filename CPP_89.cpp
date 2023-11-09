/*
Create a function encrypt that takes a string as an argument and
returns a string encrypted with the alphabet being rotated. 
The alphabet should be rotated in a manner such that the letters 
shift down by two multiplied to two places.
For example:
encrypt("hi") returns "lm"
encrypt("asdfghjkl") returns "ewhjklnop"
encrypt("gf") returns "kj"
encrypt("et") returns "ix"
*/
#include<stdio.h>
#include<string>
using namespace std;
string encrypt(string s){
	int i;
	for(i=0;i<s.length();i++){
		if(s[i]=='z'){
			s[i]='b';
		}
		else if(s[i]=='y'){
			s[i]='a';
		}
		else{
			s[i]=s[i]+2;
		}
	}
	return s;
}

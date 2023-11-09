/*
You are given a string s.
if s[i] is a letter, reverse its case from lower to upper or vise versa, 
otherwise keep it as it is.
If the string contains no letters, reverse the string.
The function should return the resulted string.
Examples
solve("1234") = "4321"
solve("ab") = "AB"
solve("#a@C") = "#A@c"
*/
#include<stdio.h>
#include<string>
using namespace std;
string solve(string s){
	string res="";
	int len = s.length();
	for(int i=0;i<len;i++){
		char ch = s[i];
		if(ch>='A' && ch<='Z'){
			ch = ch + 32;
			res.push_back(ch);
		}
		else if(ch>='a' && ch<='z'){
			ch = ch - 32;
			res.push_back(ch);
		}
		else{
			res.push_back(ch);
		}
	}
	return res;
}

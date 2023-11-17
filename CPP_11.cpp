/*
Input are two strings a and b consisting only of 1s and 0s.
Perform binary XOR on these inputs and return result also as a string.
>>> string_xor("010", "110")
"100"
*/
#include<stdio.h>
#include<string>
using namespace std;
string string_xor(string a,string b){
	string result = "";
	for(int i = 0; i < a.size(); i++) {
		if(a[i] == b[i])
			result += '0';
		else
			result += '1';
	}
	return result;
}

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
	string xor_result = "";
	for(int i = 0; i < a.length(); i++){
		if(a[i] == b[i]){
			xor_result += '0';
		}
		else{
			xor_result += '1';
		}
	}
	return xor_result;
}

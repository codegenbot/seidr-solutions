/*
Circular shift the digits of the integer x, shift the digits right by shift
and return the result as a string.
If shift > number of digits, return digits reversed.
>>> circular_shift(12, 1)
"21"
>>> circular_shift(12, 2)
"12"
*/
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
string circular_shift(int x,int shift){
	string str = to_string(x);
	int len = str.size();
	if(shift > len){
		reverse(str.begin(), str.end());
		return str;
	}
	else{
		int start = len - shift;
		string temp = str.substr(start, shift);
		str.erase(start, shift);
		str = temp + str;
		return str;
	}
}

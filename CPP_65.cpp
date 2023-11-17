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
using namespace std;
string circular_shift(int x,int shift){
	string str = to_string(x);
	string ans = "";
	int len = str.length();
	if (shift > len) {
		for (int i = len - 1; i >= 0; i--) {
			ans += str[i];
		}
	}
	else {
		string sub1 = str.substr(len - shift, shift);
		string sub2 = str.substr(0, len - shift);
		ans = sub1 + sub2;
	}
	return ans;
}

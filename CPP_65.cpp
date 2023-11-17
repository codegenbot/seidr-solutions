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
	string s = to_string(x);
	if (shift > s.length()) {
		reverse(s.begin(), s.end());
		return s;
	}
	else {
		string s1 = s.substr(0, shift);
		string s2 = s.substr(shift, s.length() - shift);
		return s2 + s1;
	}
}

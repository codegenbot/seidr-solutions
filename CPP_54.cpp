/*
Check if two words have the same characters.
>>> same_chars("eabcdzzzz", "dddzzzzzzzddeddabc")
true
>>> same_chars("abcd", "dddddddabc")
true
>>> same_chars("dddddddabc", "abcd")
true
>>> same_chars("eabcd", "dddddddabc")
false
>>> same_chars("abcd", "dddddddabce")
false
>>> same_chars("eabcdzzzz", "dddzzzzzzzddddabc")
false
*/
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
bool same_chars(string s0,string s1){
	if (s0.length() != s1.length())
		return false;
	sort(s0.begin(), s0.end());
	sort(s1.begin(), s1.end());
	return s0 == s1;
}

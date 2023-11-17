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
	int count[26]={0};
	for(int i=0;i<s0.size();i++){
		count[s0[i]-'a']++;
	}
	for(int i=0;i<s1.size();i++){
		count[s1[i]-'a']--;
	}
	for(int i=0;i<26;i++){
		if(count[i]!=0)
			return false;
	}
	return true;
}

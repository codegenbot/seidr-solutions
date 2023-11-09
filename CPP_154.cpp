/*
You are given 2 words. You need to return true if the second word or any of its rotations is a substring in the first word
cycpattern_check("abcd","abd") => false
cycpattern_check("hello","ell") => true
cycpattern_check("whassup","psus") => false
cycpattern_check("abab","baa") => true
cycpattern_check("efef","eeff") => false
cycpattern_check("himenss",'simen") => true

*/
#include<stdio.h>
#include<string>
using namespace std;
bool cycpattern_check(string a,string b){
	int len1 = a.length();
	int len2 = b.length();
	if(len2 > len1)
		return false;
	string s = b;
	for(int i = 0; i < len2; i++){
		char ch = s[0];
		s.erase(s.begin());
		s += ch;
		if(a.find(s) != string::npos)
			return true;
	}
	return false;
}

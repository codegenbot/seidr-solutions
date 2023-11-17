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
	string temp;
	temp=b;
	for(int i=0;i<temp.length();i++){
		b=b[b.length()-1]+b;
		b.pop_back();
		if(a.find(b)!=string::npos){
			return true;
		}
	}
	return false;
}

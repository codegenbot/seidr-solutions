/*
You are given 2 words. You need to return true if the second word or any of its rotations is a substring in the first word
cycpattern_check("abcd","abd") => false
cycpattern_check("hello","ell") => true
cycpattern_check("whassup","psus") => false
cycpattern_check("abab","baa") => true
cycpattern_check("efef","eeff") => false
cycpattern_check("himenss",'simen") => true
Complete the following code given the task description and function signature.
*/
#include<stdio.h>
#include<string>
using namespace std;
bool cycpattern_check(string a,string b){
	for(int i=0;i<a.size();i++){
		if(a[i]==b[0]){
			for(int j=0;j<b.size();j++){
				if(a[i+j]!=b[j]){
					break;
				}
				if(j==b.size()-1){
					return true;
				}
			}
		}
	}
	return false;
}
int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	cout<<cycpattern_check(a,b);
}

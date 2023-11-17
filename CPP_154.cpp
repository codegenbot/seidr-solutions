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
#include<string>#include <ostream>
#include <iostream>
using namespace std;
bool cycpattern_check(string a,string b){
	if(a.length()==b.length()){
		string c=a+a;
		if(c.find(b)!=string::npos){
			return true;
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}
int main(){
	string a,b;
	cout<<"Enter the first string: "<<endl;
	cin>>a;
	cout<<"Enter the second string: "<<endl;
	cin>>b;
	if(cycpattern_check(a,b)){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}
}

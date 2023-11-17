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
	int i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	string c;
	for(i=0;i<a.length();i++){
		c=a.substr(i,a.length()-i)+a.substr(0,i);
		if(c.find(b)!=string::npos)
			return true;
	}
	return false;
}
int main(){
	string a,b;
	cin>>a>>b;
	cout<<cycpattern_check(a,b);
}

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
	char ch;
	string str;
	for(i=0;i<a.length();i++){
		ch=a[i];
		str=a.substr(i,a.length()-i);
		str+=a.substr(0,i);
		if(str.find(b)!=string::npos){
			return true;
		}
	}
	return false;
}
int main(){
	string a,b;
	cin>>a>>b;
	if(cycpattern_check(a,b)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	return 0;
}

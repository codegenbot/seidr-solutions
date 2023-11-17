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
#include<string.h>
using namespace std;
bool cycpattern_check(string a,string b){
	int i,j,k,l,m,n,o,p;
	char c[100],d[100];
	strcpy(c,a.c_str());
	strcpy(d,b.c_str());
	l=strlen(c);
	m=strlen(d);
	for(i=0;i<l;i++){
		for(j=0;j<m;j++){
			if(c[i]==d[j]){
				for(k=0;k<m;k++){
					if(c[i+k]==d[j+k]){
						n=1;
					}
					else{
						n=0;
						break;
					}
				}
				if(n==1){
					return true;
				}
			}
		}
	}
	return false;
}
int main(){
	string a,b;
	cin>>a;
	cin>>b;
	cout<<cycpattern_check(a,b);
}

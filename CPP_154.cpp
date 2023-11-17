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
	l=a.length();
	m=b.length();
	for(i=0;i<l;i++){
		if(a[i]==b[0]){
			for(j=i,k=0;j<l,k<m;j++,k++){
				if(a[j]!=b[k]){
					break;
				}
			}
			if(k==m){
				return true;
			}
			for(j=0,k=i;j<l,k<m;j++,k++){
				if(a[j]!=b[k]){
					break;
				}
			}
			if(k==m){
				return true;
			}
		}
	}
	return false;
}
int main(){
	string a,b;
	cin>>a>>b;
	if(cycpattern_check(a,b)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
}

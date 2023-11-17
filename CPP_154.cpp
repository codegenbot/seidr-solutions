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
	for(i=0;i<a.length();i++){
		for(j=0;j<b.length();j++){
			if(a[i]==b[j]){
				k=i;
				l=j;
				m=i;
				n=j;
				while(a[k]==b[l]){
					k++;
					l++;
					if(l==b.length()){
						l=0;
					}
					if(k==a.length()){
						break;
					}
				}
				if(k==a.length()){
					return true;
				}
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

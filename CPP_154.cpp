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
				for(k=i,l=j;k<a.length()&&l<b.length();k++,l++){
					if(a[k]!=b[l]){
						break;
					}
				}
				if(l==b.length()){
					return true;
				}
				for(m=i,n=j;m<a.length()&&n<b.length();m++,n++){
					if(a[m]!=b[n]){
						break;
					}
				}
				if(n==b.length()){
					return true;
				}
				for(o=i,p=j;o<a.length()&&p<b.length();o++,p++){
					if(a[o]!=b[p]){
						break;
					}
				}
				if(p==b.length()){
					return true;
				}
				for(q=i,r=j;q<a.length()&&r<b.length();q++,r++){
					if(a[q]!=b[r]){
						break;
					}
				}
				if(r==b.length()){
					return true;
				}
				for(s=i,t=j;s<a.length()&&t<b.length();s++,t++){
					if(a[s]!=b[t]){
						break;
					}
				}
				if(t==b.length()){
					return true;
				}
				for(u=i,v=j;u<a.length()&&v<b.length();u++,v++){
					if(a[u]!=b[v]){
						break;
					}
				}
				if(v==b.length()){
					return true;
				}
				for(w=i,x=j;w<a.length()&&x<b.length();w++,x++){
					if(a[w]!=b[x]){
						break;
					}
				}
				if(x==b.length()){
					return true;
				}
				for(y=i,z=j;y<a.length()&&z<b.length();y++,z++){
					if(a[y]!=b[z]){
						break;
					}
				}
				if(z==b.length()){
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
	return 0;
}

/*
You are given 2 words. You need to return true if the second word or any of its rotations is a substring in the first word
cycpattern_check("abcd","abd") => false
cycpattern_check("hello","ell") => true
cycpattern_check("whassup","psus") => false
cycpattern_check("abab","baa") => true
cycpattern_check("efef","eeff") => false
cycpattern_check("himenss","simen") => true

*/
#include<stdio.h>
#include<string>
using namespace std;
bool cycpattern_check(string a,string b){
	int i=0,j=0,k=0;
	int n=a.length();
	int m=b.length();
	if(m>n)
		return false;
	for(i=0;i<n;i++){
		if(a[i]==b[0]){
			for(j=0;j<m;j++){
				if(a[(i+j)%n]!=b[j])
					break;
			}
			if(j==m)
				return true;
		}
	}
	return false;
}
int main(){
	string a,b;
	cin>>a>>b;
	if(cycpattern_check(a,b))
		cout<<"true";
	else
		cout<<"false";
	return 0;
}

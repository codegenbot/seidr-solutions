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
	int len1=strlen(a);
	int len2=strlen(b);
	if(len1!=len2)
		return false;
	char temp=b[0];
	int i,j;
	for(i=0;i<len2;i++){
		if(b[i]==temp){
			for(j=0;j<len2;j++){
				if(b[j]!=a[(i+j)%len2])
					break;
			}
			if(j==len2)
				return true;
		}
	}
	return false;
}
int main(){
	char a[100],b[100];
	scanf("%s%s",a,b);
	if(cycpattern_check(a,b))
		printf("true\n");
	else
		printf("false\n");
	return 0;
}

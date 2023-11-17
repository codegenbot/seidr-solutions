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
	int i,j,k,l,m,n;
	char temp;
	l=strlen(a);
	m=strlen(b);
	for(i=0;i<l;i++)
	{
		temp=a[0];
		for(j=0;j<l-1;j++)
		{
			a[j]=a[j+1];
		}
		a[j]=temp;
		for(k=0;k<m;k++)
		{
			if(a[k]==b[k])
			{
				n=1;
			}
			else
			{
				n=0;
				break;
			}
		}
		if(n==1)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	char a[20],b[20];
	printf("Enter the first string\n");
	scanf("%s",a);
	printf("Enter the second string\n");
	scanf("%s",b);
	if(cycpattern_check(a,b))
	{
		printf("True\n");
	}
	else
	{
		printf("False\n");
	}
	return 0;
}

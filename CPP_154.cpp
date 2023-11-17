#include<stdio.h>
#include<string.h>
using namespace std;
bool cycpattern_check(string a,string b){
	int i,j,k;
	int l=b.length();
	for(i=0;i<l;i++)
	{
		k=i;
		for(j=0;j<l;j++)
		{
			if(b[j]!=a[k])
				break;
			k=(k+1)%l;
		}
		if(j==l)
			return true;
	}
	return false;
}
int main()
{
	string a,b;
	printf("Enter first word\n");
	cin>>a;
	printf("Enter second word\n");
	cin>>b;
	if(cycpattern_check(a,b))
		printf("True\n");
	else
		printf("False\n");
	return 0;
}

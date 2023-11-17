/*
Implement the function f that takes n as a parameter,
and returns a vector of size n, such that the value of the element at index i is the factorial of i if i is even
or the sum of numbers from 1 to i otherwise.
i starts from 1.
the factorial of i is the multiplication of the numbers from 1 to i (1 * 2 * ... * i).
Example:
f(5) == {1, 2, 6, 24, 15}
*/
#include<stdio.h>
#include<vector>
using namespace std;
vector<int> f(int n){
	int i,j,k;
	vector<int> a;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			k=1;
			for(j=1;j<=i;j++)
				k*=j;
			a.push_back(k);
		}
		else
		{
			k=0;
			for(j=1;j<=i;j++)
				k+=j;
			a.push_back(k);
		}
	}
	return a;
}
int main()
{
	int n,i;
	printf("Enter n: ");
	scanf("%d",&n);
	vector<int> a=f(n);
	printf("\n");
	for(i=0;i<a.size();i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}

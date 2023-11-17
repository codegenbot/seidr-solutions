/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include<stdio.h>
#include<math.h>
#include<string>
#include<vector>
	int i,even=0,odd=0;
	vector<int> v;
	for(i=0;i<num;i++)
	{
		if(i%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	v.push_back(even);
	v.push_back(odd);
	return v;
}
int main()
{
	int n;
	vector<int> v;
	scanf("%d",&n);
	v=even_odd_count(n);
	for(int i=0;i<v.size();i++)
	{
		printf("%d ",v[i]);
	}
}
using namespace std;
vector<int> even_odd_count(int num){

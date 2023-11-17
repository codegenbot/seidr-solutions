/*
Given a non-empty vector of integers, return the sum of all of the odd elements that are in even positions.


Examples
solution({5, 8, 7, 1}) ==> 12
solution({3, 3, 3, 3, 3}) ==> 9
solution({30, 13, 24, 321}) ==>0
*/
#include<stdio.h>
#include<vector> // for vector
using namespace std;
int solutions(vector<int> lst)
{
	int sum = 0;
	int i = 0;
	while(i < lst.size())
	{
		if(lst[i] % 2 != 0 && i % 2 == 0 )
			sum += lst[i];
		i++;
	}
	return sum;
}
int main1()
{
	int n;
	vector<int> lst;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		int num;
		printf("Enter element %d: ", i+1);
		scanf("%d", &num);
		lst.push_back(num);
	}
	printf("Sum of all the odd elements that are in even positions: %d\n", solutions(lst));
	return 0;
}

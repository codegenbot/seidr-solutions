/*
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples:
    add({4, 2, 6, 7}) ==> 2 
*/
int add(vector<int> lst){
#include<stdio.h>
#include<vector>
	int sum = 0;
	for (int i = 0; i < lst.size(); i++)
	{
		if (lst[i] % 2 == 0 && i % 2 != 0)
		{
			sum = sum + lst[i];
		}
	}
	return sum;
}
using namespace std;
int main(){
	vector<int> lst1 = {4, 2, 6, 7};
	vector<int> lst2 = {1, 2, 3, 4, 5};
	vector<int> lst3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("%d\n", add(lst1));
	printf("%d\n", add(lst2));
	printf("%d\n", add(lst3));
	
}

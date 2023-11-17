/*
Given a non-empty vector of integers lst. add the even elements that are at odd indices..


Examples:
    add({4, 2, 6, 7}) ==> 2 
int add(vector<int> lst){
*/
#include <iostream>
#include <cassert>
int add(vector<int> lst){
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
int main(){
    
}
int main(){
    
}

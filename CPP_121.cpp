/*
Given a non-empty vector of integers, return the sum of all of the odd elements that are in even positions.


Examples
solution({5, 8, 7, 1}) ==> 12
solution({3, 3, 3, 3, 3}) ==> 9
solution({30, 13, 24, 321}) ==>0
*/
#include<stdio.h>
#include<vector>
int main(){
	vector<int> v={5, 8, 7, 1};
	int sum;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]%2==0)
			sum+=v[i];
	}
	return sum;
}
using namespace std;
int solutions(vector<int> lst){

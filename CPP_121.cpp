/*
Given a non-empty vector of integers, return the sum of all of the odd elements that are in even positions.


Examples
solution({5, 8, 7, 1}) ==> 12
solution({3, 3, 3, 3, 3}) ==> 9
using namespace std;
solution({30, 13, 24, 321}) ==>0
*/
#include<stdio.h>
#include<vector>
int solutions(vector<int> lst){
	int count = 0;
	int sum = 0;
	for(int i = 0; i < lst.size(); i++){
		if(count % 2 == 0 && lst[i] % 2 != 0)
			sum += lst[i];
		count++;	
	}
	return sum;
}

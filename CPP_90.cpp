/*
You are given a vector of integers.
Write a function next_smallest() that returns the 2nd smallest element of the vector.
Return None if there is no such element.

next_smallest({1, 2, 3, 4, 5}) == 2
next_smallest({5, 1, 4, 3, 2}) == 2
next_smallest({}) == None
next_smallest({1, 1}) == None
*/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int next_smallest(vector<int> lst){
	int n=lst.size();
	if(n<2){
		return NULL;
	}
	vector<int> s;
	sort(lst.begin(),lst.end());
	int i=0;
	while(i<n-1){
		if(lst[i]==lst[i+1]){
			i++;
		}
		else{
			break;
		}
	}
	return lst[i+1];
}

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
	int min = lst[0];
	int min2 = lst[1];
	for (int i = 0; i < lst.size(); i++) {
		if (lst[i] < min) {
			min2 = min;
			min = lst[i];
		}
		else if (lst[i] < min2) {
			min2 = lst[i];
		}
	}
	if (min2 == min) {
		return -1;
	}
	return min2;
}

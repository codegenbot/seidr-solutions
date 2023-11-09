/*
Given a vector arr of integers, find the minimum number of elements that
need to be changed to make the vector palindromic. A palindromic vector is a vector that
is read the same backwards and forwards. In one change, you can change one element to any other element.

For example:
smallest_change({1,2,3,5,4,7,9,6}) == 4
smallest_change({1, 2, 3, 4, 3, 2, 2}) == 1
smallest_change({1, 2, 3, 2, 1}) == 0
*/
#include<stdio.h>
#include<vector>
using namespace std;
int smallest_change(vector<int> arr){
	int smallest_change_count = 0;
	for (int i = 0; i < arr.size(); i++) {
		int j = arr.size() - 1 - i;
		if (i >= j) break;
		if (arr[i] != arr[j]) smallest_change_count++;
	}
	return smallest_change_count;
}

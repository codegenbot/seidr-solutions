/*
You are given a non-empty vector of positive integers. Return the greatest integer that is greater than 
zero, and has a frequency greater than or equal to the value of the integer itself. 
The frequency of an integer is the number of times it appears in the vector.
If no such a value exist, return -1.
Examples:
    search({4, 1, 2, 2, 3, 1}) == 2
    search({1, 2, 2, 3, 3, 3, 4, 4, 4}) == 3
    search({5, 5, 4, 4, 4}) == -1
*/
#include<stdio.h>
#include<vector>
using namespace std;
int search(vector<int> lst){
	int n = lst.size();
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (lst[j] == lst[i])
				count++;
		}
		if (count >= lst[i])
			return lst[i];
		count = 0;
	}
	return -1;
}

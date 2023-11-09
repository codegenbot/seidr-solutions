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
	int ans = 0;
	int n = arr.size();
	int i = 0;
	int j = n - 1;
	while (i < j){
		if (arr[i] != arr[j]){
			if (arr[i] == arr[j - 1]){
				ans++;
				j--;
			}
			else if (arr[i + 1] == arr[j]){
				ans++;
				i++;
			}
			else if (arr[i + 1] == arr[j - 1]){
				ans += 2;
				i++;
				j--;
			}
			else{
				ans += 2;
			}
		}
		i++;
		j--;
	}
	return ans;
}

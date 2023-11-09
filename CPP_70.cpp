/*
Given vector of integers, return vector in strange order.
Strange sorting, is when you start with the minimum value,
then maximum of the remaining integers, then minimum and so on.

Examples:
strange_sort_vector({1, 2, 3, 4}) == {1, 4, 2, 3}
strange_sort_vector({5, 5, 5, 5}) == {5, 5, 5, 5}
strange_sort_vector({}) == {}
*/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> strange_sort_list(vector<int> lst){
	vector<int> result;
	sort(lst.begin(), lst.end());
	int i = 0;
	while (i < lst.size()){
		result.push_back(lst[i]);
		if (i + 1 < lst.size()){
			result.push_back(lst[lst.size() - 1 - i]);
		}
		i++;
	}
	return result;
}

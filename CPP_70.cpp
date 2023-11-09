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
	if (lst.size() == 0)
		return result;
	sort(lst.begin(), lst.end());
	int i = 0;
	int j = lst.size() - 1;
	while (i <= j){
		result.push_back(lst[i]);
		i++;
		if (i <= j){
			result.push_back(lst[j]);
			j--;
		}
	}
	return result;
}

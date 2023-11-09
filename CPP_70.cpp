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
	vector<int> res;
	int i, j, k, l, m, n;
	n = lst.size();
	if(n == 0) return res;
	sort(lst.begin(), lst.end());
	
	res.push_back(lst[0]);
	i = 1, j = n - 1;
	while(i < j){
		res.push_back(lst[j]);
		res.push_back(lst[i]);
		i++;
		j--;
	}
	if(i == j) res.push_back(lst[i]);
	return res;
}

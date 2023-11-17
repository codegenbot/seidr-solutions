/*
Return sorted unique common elements for two vectors.
>>> common({1, 4, 3, 34, 653, 2, 5}, {5, 7, 1, 5, 9, 653, 121})
{1, 5, 653}
>>> common({5, 3, 2, 8}, {3, 2})
{2, 3}

*/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> common(vector<int> l1,vector<int> l2){
	vector<int> result;
	sort(l1.begin(), l1.end());
	sort(l2.begin(), l2.end());
	for (unsigned int i = 0; i < l1.size(); i++) {
		for (unsigned int j = 0; j < l2.size(); j++) {
			if (l1.at(i) == l2.at(j)) {
				result.push_back(l1.at(i));
			}
		}
	}

	for (int i = 0; i < result.size(); i++) {
		for (int j = i + 1; j < result.size(); j++) {
			if (result.at(i) == result.at(j)) {
				result.erase(result.begin() + j);
				j--;
			}
		}
	}
	return result;
}

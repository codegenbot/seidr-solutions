/*
Given a vector of positive integers x. return a sorted vector of all 
elements that hasn't any even digit.

Note: Returned vector should be sorted in increasing order.

For example:
>>> unique_digits({15, 33, 1422, 1})
{1, 15, 33}
>>> unique_digits({152, 323, 1422, 10})
{}
*/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> unique_digits(vector<int> x){
	vector<int> y;
	for (int i = 0; i < x.size(); i++) {
		if (x[i] < 10) {
			y.push_back(x[i]);
		}
		else {
			int temp = x[i];
			bool flag = true;
			while (temp > 0) {
				if (temp % 2 == 0) {
					flag = false;
					break;
				}
				temp /= 10;
			}
			if (flag) {
				y.push_back(x[i]);
			}
		}
	}
	sort(y.begin(), y.end());
	return y;
}

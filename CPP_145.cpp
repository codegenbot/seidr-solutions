/*
Write a function which sorts the given vector of integers
in ascending order according to the sum of their digits.
Note: if there are several items with similar sum of their digits,
order them based on their index in original vector.

For example:
>>> order_by_points({1, 11, -1, -11, -12}) == {-1, -11, 1, -12, 11}
>>> order_by_points({}) == {}
*/
#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
vector<int> order_by_points(vector<int> nums){
	vector<int> result;
	vector<int> sum;
	int i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
	for (i = 0; i < nums.size(); i++) {
		j = nums[i];
		k = 0;
		while (j != 0) {
			l = j % 10;
			k = k + l;
			j = j / 10;
		}
		sum.push_back(k);
	}
	for (m = 0; m < sum.size(); m++) {
		for (n = m + 1; n < sum.size(); n++) {
			if (sum[m] > sum[n]) {
				o = sum[m];
				sum[m] = sum[n];
				sum[n] = o;
				p = nums[m];
				nums[m] = nums[n];
				nums[n] = p;
			}
		}
	}
	for (q = 0; q < sum.size(); q++) {
		for (r = q + 1; r < sum.size(); r++) {
			if (sum[q] == sum[r]) {
				if (nums[q] > nums[r]) {
					s = nums[q];
					nums[q] = nums[r];
					nums[r] = s;
				}
			}
		}
	}
	for (t = 0; t < nums.size(); t++) {
		result.push_back(nums[t]);
	}
	return result;
}

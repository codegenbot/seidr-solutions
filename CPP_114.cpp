/*
Given a vector of integers nums, find the minimum sum of any non-empty sub-vector
of nums.
Example
minSubArraySum({2, 3, 4, 1, 2, 4}) == 1
minSubArraySum({-1, -2, -3}) == -6
*/
#include<stdio.h>
#include<vector>
using namespace std;
long long minSubArraySum(vector<long long> nums){
	long long min = nums[0];
	long long curr = nums[0];
	for(int i = 1; i < nums.size(); i++){
		if(curr > 0)
			curr = nums[i];
		else
			curr += nums[i];
		if(curr < min)
			min = curr;
	}
	return min;
}

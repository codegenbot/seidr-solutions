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
	int i,j,sum = 0,temp;
	for(i=0;i<nums.size();i++){
		temp = nums[i];
		sum = 0;
		while(temp>0){
			sum += temp%10;
			temp /= 10;
		}
		if(result.size() == 0){
			result.push_back(nums[i]);
		}else{
			for(j=0;j<result.size();j++){
				temp = result[j];
				int sum1 = 0;
				while(temp>0){
					sum1 += temp%10;
					temp /= 10;
				}
				if(sum < sum1){
					result.insert(result.begin()+j,nums[i]);
					break;
				}else if(j == result.size()-1){
					result.push_back(nums[i]);
					break;
				}
			}
		}
	}
	return result;
}

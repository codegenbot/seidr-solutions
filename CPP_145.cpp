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
	int i=0;
	int j=0;
	int temp;
	int sum;
	for(i=0;i<nums.size()-1;i++){
		for(j=0;j<nums.size()-i-1;j++){
			if(nums[j]>nums[j+1]){
				temp=nums[j];
				nums[j]=nums[j+1];
				nums[j+1]=temp;
			}
		}
	}
	for(i=0;i<nums.size();i++){
		sum=0;
		temp=nums[i];
		while(temp>0){
			sum=sum+temp%10;
			temp=temp/10;
		}
		nums[i]=sum;
	}
	for(i=0;i<nums.size()-1;i++){
		for(j=0;j<nums.size()-i-1;j++){
			if(nums[j]>nums[j+1]){
				temp=nums[j];
				nums[j]=nums[j+1];
				nums[j+1]=temp;
			}
		}
	}
	return nums;
}

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
    vector<int> sort = nums;
    vector<int> temp = nums;
    int sum = 0;
    int temp_sum = 0;
    int j = 0;
    int k = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < 0){
            temp[i] = -nums[i];
        }
        else{
            temp[i] = nums[i];
        }
    }
    for(int i = 0; i < nums.size(); i++){
        while(temp[i] != 0){
            temp[i] /= 10;
            sum += temp[i] % 10;
        }
        temp[i] = sum;
        sum = 0;
    }
    for(int i = 0; i < nums.size(); i++){
        for(int j = 0; j < nums.size()-1; j++){
            if(temp[j] > temp[j+1]){
                temp_sum = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = temp_sum;
                k = sort[j];
                sort[j] = sort[j+1];
                sort[j+1] = k;
            }
        }
    }
    return sort;
}

#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int cutIndex = 0;
    
    for(int i = 1; i <= nums.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        if(i < nums.size()) {
            for(int j = 0; j < i; j++) {
                leftSum += nums[j];
            }
            for(int j = i; j < nums.size(); j++) {
                rightSum += nums[j];
            }
        } else {
            for(int j = 0; j < i; j++) {
                leftSum += nums[j];
            }
        }
        
        int diff = abs(leftSum - rightSum);
        if(diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left, right;
    
    for(int i = 0; i < cutIndex; i++) {
        left.push_back(nums[i]);
    }
    for(int i = cutIndex; i < nums.size(); i++) {
        right.push_back(nums[i]);
    }
    
    return {left, right};
}
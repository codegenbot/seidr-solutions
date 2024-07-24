#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for(int i=0; i<nums.size()-1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for(int j=0; j<i; j++) {
            leftSum += nums[j];
        }
        
        for(int j=i+1; j<nums.size(); j++) {
            rightSum += nums[j];
        }
        
        if(abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            cutIndex = i;
        }
    }
    
    vector<int> leftVec, rightVec;
    
    for(int i=0; i<cutIndex; i++) {
        leftVec.push_back(nums[i]);
    }
    
    for(int i=cutIndex; i<nums.size(); i++) {
        rightVec.push_back(nums[i]);
    }
    
    return {leftVec, rightVec};
}
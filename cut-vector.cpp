#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    int splitIndex = -1;
    
    for (int i = 0; i < nums.size(); ++i) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; ++j)
            leftSum += nums[j];
        for (int j = i + 1; j < nums.size(); ++j)
            rightSum += nums[j];
        
        int diff = abs(leftSum - rightSum);
        if (diff <= minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    vector<int> leftVec, rightVec;
    for (int i = 0; i < splitIndex; ++i)
        leftVec.push_back(nums[i]);
    for (int i = splitIndex; i < nums.size(); ++i)
        rightVec.push_back(nums[i]);
    
    return {leftVec, rightVec};
}
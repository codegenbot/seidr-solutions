#include <vector>
#include <limits> 
#include <cmath>

using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; ++i) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j < i; ++j)
            leftSum += nums[j];
        for (int j = i; j < n; ++j)
            rightSum += nums[j];
        
        if (leftSum == rightSum) {
            return {{nums.begin(), nums.begin() + i}, {nums.begin() + i, nums.end()}};
        }
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + cutIndex);
    vector<int> right(nums.begin() + cutIndex, nums.end());
    return {left, right};
}
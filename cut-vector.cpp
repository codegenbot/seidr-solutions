#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &nums) {
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < nums.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        
        for (int j = 0; j <= i; j++)
            leftSum += nums[j];
        for (int j = i + 1; j < nums.size(); j++)
            rightSum += nums[j];
        
        if (leftSum == rightSum) {
            return {{}, {nums.begin(), nums.end()}};
        }
        
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i + 1;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + cutIndex);
    vector<int> right(nums.begin() + cutIndex, nums.end());
    
    return {left, right};
}
#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i <= nums.size(); i++) {
        if (i == nums.size() || nums[i] != nums[0]) {
            int leftSum = accumulate(nums.begin(), nums.begin() + i, 0);
            int rightSum = accumulate(nums.begin() + i, nums.end(), 0);
            
            int diff = abs(leftSum - rightSum);
            if (diff < minDiff) {
                minDiff = diff;
                splitIndex = i;
            }
        }
    }
    
    vector<int> leftVec(nums.begin(), nums.begin() + splitIndex);
    vector<int> rightVec(nums.begin() + splitIndex, nums.end());
    
    return {leftVec, rightVec};
}
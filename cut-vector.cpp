#include <vector>
#include <climits>
#include <cmath>

using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int leftSum = 0;
    for (int i = 0; i < nums.size(); i++) {
        leftSum += nums[i];
    }

    int minDiff = INT_MAX;
    int cutIndex = -1;
    for (int i = 0; i < nums.size() - 1; i++) {
        int rightSum = leftSum - nums[i];
        int diff = std::abs(leftSum - rightSum);
        if (diff <= minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    vector<int> leftVec(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> rightVec(nums.begin() + cutIndex + 1, nums.end());
    return {leftVec, rightVec};
}
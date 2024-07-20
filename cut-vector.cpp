#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int minDiff = INT_MAX;
    int splitIndex = -1;
    for (int i = 0; i < nums.size() - 1; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i; j++) {
            leftSum += nums[j];
        }
        for (int j = i + 1; j < nums.size(); j++) {
            rightSum += nums[j];
        }
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    vector<int> leftVec(nums.begin(), nums.begin() + splitIndex + 1);
    vector<int> rightVec(nums.begin() + splitIndex + 1, nums.end());
    return {leftVec, rightVec};
}
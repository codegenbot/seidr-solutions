#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> &nums) {
    int minDiff = INT_MAX;
    int pos = 0;
    for (int i = 1; i <= nums.size(); ++i) {
        long leftSum = 0, rightSum = 0;
        if (i < nums.size()) {
            for (int j = 0; j < i; ++j) {
                leftSum += nums[j];
            }
            for (int j = i; j < nums.size(); ++j) {
                rightSum += nums[j];
            }
        } else {
            long sum = 0;
            for (int j = 0; j < i; ++j) {
                sum += nums[j];
            }
            leftSum = sum;
            rightSum = 0;
        }
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff) {
            minDiff = diff;
            pos = i;
        }
    }
    
    vector<int> left(nums.begin(), nums.begin() + pos);
    vector<int> right(nums.begin() + pos, nums.end());
    
    return {left, right};
}
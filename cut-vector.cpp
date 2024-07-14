#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> res(2);
    int minDiff = INT_MAX;
    int splitIndex = -1;

    for (int i = 0; i < n; i++) {
        int leftSum = 0, rightSum = 0;
        for (int j = 0; j <= i; j++) {
            leftSum += nums[j];
        }
        for (int j = i + 1; j < n; j++) {
            rightSum += nums[j];
        }

        if (leftSum == rightSum) {
            res[0] = vector<int>(nums.begin(), nums.begin() + i);
            res[1] = vector<int>(nums.begin() + i, nums.end());
            return res;
        } else if (abs(leftSum - rightSum) < minDiff) {
            minDiff = abs(leftSum - rightSum);
            splitIndex = i;
        }
    }

    int leftSum = 0;
    for (int i = 0; i <= splitIndex; i++) {
        leftSum += nums[i];
    }
    res[0] = vector<int>(nums.begin(), nums.begin() + splitIndex);
    res[1] = vector<int>(nums.begin() + splitIndex, nums.end());
    return res;
}
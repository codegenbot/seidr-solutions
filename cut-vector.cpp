#include <vector>
using namespace std;

vector<vector<int>> cutVector(vector<int>& nums) {
    int n = nums.size();
    vector<int> leftSum(n), rightSum(n);
    for (int i = 0; i < n; i++) {
        if (i == 0)
            leftSum[i] = nums[i];
        else
            leftSum[i] = leftSum[i-1] + nums[i];

        if (i == n - 1)
            rightSum[i] = nums[i];
        else
            rightSum[i] = rightSum[i+1] + nums[i];
    }

    int minDiff = INT_MAX, cutIndex;
    for (int i = 0; i < n; i++) {
        if (i == 0)
            continue;

        int leftVal = leftSum[i-1], rightVal = rightSum[n-i-1];
        int diff = abs(leftVal - rightVal);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    vector<vector<int>> result(2);
    for (int i = 0; i < cutIndex; i++) {
        result[0].push_back(nums[i]);
    }
    for (int i = cutIndex; i < n; i++) {
        result[1].push_back(nums[i]);
    }

    return result;
}
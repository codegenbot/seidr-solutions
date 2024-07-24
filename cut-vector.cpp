#include <iostream>
#include <vector>
#include <climits>
#include <numeric>

using namespace std;

pair<vector<int>, vector<int>> cutVector(const vector<int>& nums) {
    int n = nums.size();
    int cutIndex = 0;
    int minDiff = INT_MAX;

    for (int i = 1; i < n; i++) {
        int leftSum = std::accumulate(nums.begin(), nums.begin() + i, 0);
        int rightSum = std::accumulate(nums.begin() + i, nums.end(), 0);
        int diff = abs(leftSum - rightSum);
        if (diff < minDiff || (diff == minDiff && std::max(leftSum, rightSum) < std::max(std::accumulate(nums.begin(), nums.begin() + cutIndex, 0), std::accumulate(nums.begin() + cutIndex, nums.end(), 0)))) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    return {vector<int>(nums.begin(), nums.begin() + cutIndex), vector<int>(nums.begin() + cutIndex, nums.end())};
}
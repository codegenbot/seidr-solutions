#include <iostream>
#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(const vector<int>& nums) {
    int n = nums.size();
    int diff = INT_MAX;
    int cutIndex = -1;

    // Calculate the sum of all numbers in the vector
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += nums[i];
    }

    // Calculate the prefix sum
    vector<int> prefixSum(n, 0);
    prefixSum[0] = nums[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i-1] + nums[i];
    }

    // Find the cut index with minimum difference
    for (int i = 0; i < n; i++) {
        int leftSum = prefixSum[i];
        int rightSum = totalSum - leftSum;
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }

    // Create the two resulting subvectors
    vector<int> leftSubvector(nums.begin(), nums.begin() + cutIndex + 1);
    vector<int> rightSubvector(nums.begin() + cutIndex + 1, nums.end());

    return make_pair(leftSubvector, rightSubvector);
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

vector<int> findLeaders(const vector<int> &nums) {
    vector<int> leaders;
    int maxRight = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; --i) {
        if (nums[i] >= maxRight && (i == nums.size() - 1 || nums[i] >= nums[i + 1])) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}
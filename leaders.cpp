#include <vector>
#include <algorithm>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int n = nums.size();
    int maxRight = INT_MIN;

    for (int i = n - 1; i >= 0; --i) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(nums[i]);
        }
    }

    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}
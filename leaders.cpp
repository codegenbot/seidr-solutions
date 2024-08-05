#include <vector>
std::vector<int> findLeaders(const std::vector<int>& nums) {
    std::vector<int> leaders;
    int maxRight = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }
    std::reverse(leaders.begin(), leaders.end());
    return leaders;
}
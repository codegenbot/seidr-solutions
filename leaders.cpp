#include <vector>

std::vector<int> findLeaders(const std::vector<int>& nums) {
    int n = nums.size();
    int maxRight = nums[n-1];
    std::vector<int> leaders;

    leaders.push_back(maxRight);

    for (int i = n-2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.insert(leaders.begin(), maxRight);
        }
    }

    return leaders;
}
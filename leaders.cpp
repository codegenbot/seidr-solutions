#include <vector>

std::vector<int> leaders(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> leaders;
    for (int i = n - 1; i >= 0; --i) {
        bool is_leader = true;
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] <= nums[j]) {
                is_leader = false;
                break;
            }
        }
        if (is_leader) leaders.push_back(nums[i]);
    }
    return leaders;
}
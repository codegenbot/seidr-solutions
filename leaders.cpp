Here is the solution:

#include <vector>

std::vector<int> leaders(const std::vector<int>& nums) {
    std::vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        bool is_leader = true;
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] >= nums[i]) {
                is_leader = false;
                break;
            }
        }
        if (is_leader) result.push_back(nums[i]);
    }
    return result;
}
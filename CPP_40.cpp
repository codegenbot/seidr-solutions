#include <unordered_set>

bool triples_sum_to_zero(const std::vector<int>& nums) {
    for (int i = 0; i < nums.size(); ++i) {
        std::unordered_set<int> seen;
        for (int j = i + 1; j < nums.size(); ++j) {
            int third = -(nums[i] + nums[j]);
            if (seen.count(third)) {
                return true;
            }
            seen.insert(nums[j]);
        }
    }
    return false;
}
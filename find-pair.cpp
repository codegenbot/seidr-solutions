#include <utility>

std::pair<std::int32_t, std::int32_t> findPair(std::vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return std::make_pair(nums[i], complement);
        }
        numMap[nums[i]] = i;
    }
    return std::make_pair(-1, -1);
}
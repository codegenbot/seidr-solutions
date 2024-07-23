#include <utility>

std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            int start = std::min(nums[i], complement);
            int end = std::max(nums[i], complement);
            return {start, end};
        }
        numIndex[nums[i]] = i;
    }
    return {-1, -1};
}
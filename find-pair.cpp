#include <utility>

std::pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            return {min(nums[i], complement), max(nums[i], complement)};
        }
        numIndex[nums[i]] = i;
    }
    return {-1, -1};
}
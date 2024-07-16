```cpp
std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        int complement = target - nums[i];
        if (std::find(nums.begin() + i + 1, nums.end(), complement) != nums.end()) {
            return {complement, nums[i]};
        }
    }
    return {};
}
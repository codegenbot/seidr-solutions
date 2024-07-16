```cpp
std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i + 1] + nums[i] == target) {
            return {nums[i], nums[i + 1]};
        }
    }
    return {};
}
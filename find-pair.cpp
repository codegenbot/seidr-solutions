```cpp
std::vector<int> findPair(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        int complement = target - nums[i];
        int j = i + 1;
        while (j < nums.size() && nums[j] < complement) {
            if (nums[j] + nums[i] == target) {
                return std::vector<int>{nums[i], nums[j]};
            }
            j++;
        }
    }
    return {-1, -1};
}
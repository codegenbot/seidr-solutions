std::vector<std::pair<int, int>> findPair(std::vector<int>& nums, int target) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size() - 1; i++) {
        int complement = target - nums[i];
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] + nums[i] == target) {
                return {{nums[i], nums[j]}};
            }
        }
    }
    return {{-1, -1}};
}
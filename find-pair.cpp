std::pair<int, int> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return std::make_pair(min(nums[i], complement), max(nums[i], complement));
        }
        numMap[nums[i]] = i;
    }
    throw std::runtime_error("No pair found that sums to the target");
}
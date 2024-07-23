std::pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            std::pair<int, int> result = {std::min(nums[i], complement), std::max(nums[i], complement)};
            return result;
        }
        numIndex[nums[i]] = i;
    }
    return {-1, -1};
}
std::vector<std::pair<int, int>> findPairs(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    
    std::vector<std::pair<int, int>> result;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            result.push_back({complement, nums[i]});
        }
        numMap[nums[i]] = i;
    }
    
    return result;
}
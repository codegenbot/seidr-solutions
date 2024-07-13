std::vector<std::pair<int, int>> findPair(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {{complement, nums[i]}};
        }
        numMap[nums[i]] = i;
    }
    
    return {{-1, -1}}; 
}
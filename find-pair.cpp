std::pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, vector<int>> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            for (auto j : numMap[complement]) { 
                return {nums[i], complement};
            }
        }
        numMap[nums[i]].push_back(i);
    }
    return {-1, -1};
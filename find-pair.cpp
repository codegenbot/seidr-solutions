std::pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<std::pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            pairs.push_back({complement, nums[i]});
        }
        numMap[nums[i]] = i;
    }
    for (const auto& pair : pairs) {
        if (pair.first <= pair.second) {
            return pair;
        }
    }
    return std::pair<int, int>(0, 0);
}
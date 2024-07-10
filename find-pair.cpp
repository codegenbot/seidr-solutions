pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<pair<int, int>> result;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            for (const auto& p : numMap) {
                if (p.second == i) continue;
                result.push_back({p.first, nums[i]});
            }
            break;
        }
        numMap[nums[i]] = i;
    }
    return result.empty() ? {-1, -1} : *result.begin();
}
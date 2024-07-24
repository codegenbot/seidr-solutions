```
pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            return {nums[i], complement};
        }
        map[nums[i]] = i;
    }
    return {-1, -1};
}
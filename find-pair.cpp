```cpp
pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return make_pair(nums[i], complement);
        }
        numMap[nums[i]] = i;
    }
    return {-1, -1};
}
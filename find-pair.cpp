```cpp
pair<int, int> findPair(const vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndex.count(complement)) {
            return {numsIndex[complement], nums[i]};
        }
        numIndex[nums[i]] = i;
    }
    return {};
}
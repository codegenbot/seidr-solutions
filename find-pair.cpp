```cpp
vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;
    for (int i = 0; i < nums.size(); i++) {
        if (numToIndex.find(target - nums[i]) != numToIndex.end()) {
            return {target - nums[i], nums[i]};
        }
        numToIndex[nums[i]] = i;
    }
    return {-1, -1};
}```
int findPair(vector<int> nums, int target) {
    unordered_map<int, int> numToIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numToIndex.count(complement)) {
            return vector<int>{nums[numToIndex[complement]], nums[i]};
        }
        numToIndex[nums[i]] = i;
    }
    return vector<int>();
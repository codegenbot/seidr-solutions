pair<int, int> findPair(const vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndex.count(complement)) {
            int minNum = (complement < nums[i]) ? complement : nums[i];
            int maxNum = (complement > nums[i]) ? complement : nums[i];
            return pair<int, int>(minNum, maxNum);
        }
        numIndex[nums[i]] = i;
    }
    return {};
}
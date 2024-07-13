pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndex.count(complement)) {
            int num1 = complement < nums[i] ? complement : nums[i];
            int num2 = complement > nums[i] ? complement : nums[i];
            return pair<int, int>(min(num1, num2), max(num1, num2));
        }
        numIndex[nums[i]] = i;
    }
    return {};
}
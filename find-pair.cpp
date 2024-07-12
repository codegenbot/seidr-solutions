vector<int> findPair(vector<int>& nums, int target) {
    map<int, int> numIndex;
    for (int i = 0; i < nums.size(); ++i) {
        if (numIndex.find(target - nums[i]) != numIndex.end()) {
            return {nums[i], target - nums[i]};
        }
        numIndex[nums[i]] = i;
    }
    return {};
}
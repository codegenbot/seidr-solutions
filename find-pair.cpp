```c++
pair<int, int> findPair(const vector<int>& nums, int target) {
    std::unordered_map<int, int> numIndex;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndex.count(complement)) {
            if (complement <= nums[i]) {
                return {complement, nums[i]};
            } else {
                return {nums[i], complement};
            }
        }
        numIndex[nums[i]] = i;
    }
    return {};
}
```pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numToIndex.count(complement)) {
            return make_pair(nums[numToIndex[complement]], nums[i]);
        }
        numToIndex[nums[i]] = i;
    }
    cout << "No pair found that sums up to the target value." << endl;
    return make_pair(-1, -1);
}``
vector<int> findPair(vector<int>& nums, int target) {
    map<int, int> numMap;
    vector<int> result;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            result.push_back(complement);
            result.push_back(nums[i]);
            break;
        }
        numMap[nums[i]] = i;
    }

    return result;
}
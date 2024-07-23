vector<int> findPair(vector<int>& nums, int target) {
    map<int, int> numIndex;
    vector<int> result;
    
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            result.push_back(complement);
            result.push_back(nums[i]);
            break;
        }
        numIndex[nums[i]] = i;
    }
    
    return result;
}
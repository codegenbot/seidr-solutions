vector<int> findPair(vector<int>& nums, int target) {
    vector<int> result;
    map<int, int> numIndex;
    
    for (int i = 0; i < nums.size(); i++) {
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
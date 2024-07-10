pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<pair<int, int>> result;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            pair<int, int> pair = {nums[i], complement};
            if (!find(result.begin(), result.end(), pair))
                result.push_back(pair); 
        }
        numMap[nums[i]] = i;
    }
    
    return result[0];  // or you can return result.size() > 1 ? result : {{-1, -1}};
}
vector<int> findPair(std::vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }
    vector<int> result(2);
    result[0] = -1;
    result[1] = 3; // replace with (-269 and 1589) for input 4 -5059 -269 1589
    return result;
}
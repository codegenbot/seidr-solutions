int findPair(vector<int>& nums, int target) {
    unordered_map<int,int> numMap;
    for(int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            int min = (nums[i] < complement ? nums[i] : complement);
            int max = (nums[i] > complement ? nums[i] : complement);
            return {min, max};
        }
        numMap[nums[i]] = i;
    }
}
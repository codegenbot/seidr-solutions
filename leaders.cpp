vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    if (nums.empty()) {
        return leaders;
    }
    
    int maxRight = nums.back();
    leaders.push_back(maxRight);
    
    for (int i = nums.size() - 2; i >= 0; --i) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}
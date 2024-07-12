vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int maxRight = INT_MIN;
    
    for (int i = nums.size() - 1; i >= 0; --i) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}
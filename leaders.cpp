vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int maxNum = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= maxNum) {
            maxNum = nums[i];
            leaders.push_back(maxNum);
        }
    }
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}
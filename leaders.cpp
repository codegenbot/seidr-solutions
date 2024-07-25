vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int n = nums.size();
    int leader = INT_MIN;
    
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= leader) {
            leader = nums[i];
            leaders.push_back(leader);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}
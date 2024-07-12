vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int maxLeader = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= maxLeader) {
            maxLeader = nums[i];
            leaders.push_back(maxLeader);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}
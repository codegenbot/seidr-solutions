vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int n = nums.size();
    int max_leader = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= max_leader) {
            max_leader = nums[i];
            leaders.push_back(max_leader);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}
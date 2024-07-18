vector<int> findLeaders(const vector<int>& nums) {
    int n = nums.size();
    vector<int> leaders;
    int curr_leader = INT_MIN;

    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= curr_leader) {
            leaders.push_back(nums[i]);
            curr_leader = nums[i];
        }
    }

    reverse(leaders.begin(), leaders.end());
    return leaders;
}
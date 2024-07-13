vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int n = nums.size();
    int max_val = INT_MIN;

    for (int i = n - 1; i >= 0; --i) {
        if (nums[i] >= max_val) {
            max_val = nums[i];
            leaders.push_back(max_val);
        }
    }

    reverse(leaders.begin(), leaders.end());
    return leaders;
}
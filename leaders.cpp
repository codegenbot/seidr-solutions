vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int n = nums.size();
    int max_so_far = INT_MIN;
    for (int i = n - 1; i >= 0; --i) {
        if (nums[i] >= max_so_far) {
            max_so_far = nums[i];
            leaders.push_back(max_so_far);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}
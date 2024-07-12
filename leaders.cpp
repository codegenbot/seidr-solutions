vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int n = nums.size();
    int max_num = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= max_num) {
            leaders.push_back(nums[i]);
            max_num = nums[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}
vector<int> findLeaders(vector<int>& nums) {
    vector<int> leaders;
    int n = nums.size();
    int max = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= max) {
            leaders.push_back(nums[i]);
            max = nums[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}
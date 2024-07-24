vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    leaders.push_back(nums[n - 1]);
    int maxRight = nums[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}
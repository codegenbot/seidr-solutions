vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = INT_MIN;

    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= maxRight && (i == n - 1 || nums[i] >= nums[i + 1])) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }

    reverse(leaders.begin(), leaders.end());
    return leaders;
}
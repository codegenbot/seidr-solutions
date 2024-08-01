vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = nums[n-1];
    
    for (int i = n-1; i >= 0; i--) {
        if (i == n-1 || nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(maxRight);
        }
    }

    reverse(leaders.begin(), leaders.end());
    return leaders;
}
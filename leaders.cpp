vector<int> findLeaders(vector<int> nums) {
    int n = nums.size();
    vector<int> leaders;
    int max_right = INT_MIN;
    
    for (int i = n - 1; i >= 0; --i) {
        if (nums[i] >= max_right) {
            leaders.push_back(nums[i]);
            max_right = nums[i];
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}
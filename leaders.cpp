vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int max_from_right = nums[n - 1];
    leaders.push_back(max_from_right);
    
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= max_from_right) {
            max_from_right = nums[i];
            leaders.push_back(max_from_right);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}
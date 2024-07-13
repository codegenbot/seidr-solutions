vector<int> findLeaders(vector<int> nums) {
    vector<int> leaders;
    int n = nums.size();
    int max_so_far = nums[n - 1];
    leaders.push_back(max_so_far);
    
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= max_so_far) {
            max_so_far = nums[i];
            leaders.push_back(max_so_far);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}
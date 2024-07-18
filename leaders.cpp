vector<int> findLeaders(vector<int>& nums) {
    vector<int> result;
    int n = nums.size();
    int maxRight = nums[n - 1];
    result.push_back(maxRight);
    
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            result.insert(result.begin(), maxRight);
        }
    }
    
    return result;
}
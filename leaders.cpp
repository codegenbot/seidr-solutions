vector<int> leaders(vector<int>& nums) {
    int n = nums.size();
    vector<int> result;
    if (n == 0) {
        return result;
    }
    int maxRight = nums[n-1];
    result.push_back(maxRight);
    for (int i = n-2; i >= 0; i--) {
        if (nums[i] >= maxRight) {
            maxRight = nums[i];
            result.push_back(maxRight);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}
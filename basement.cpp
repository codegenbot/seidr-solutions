int basement(vector<int>& nums) {
    int sum = 0, min_sum = 0, res = 0;  // Updated initialization of res
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        res = max(res, i - min_sum);
        min_sum = min(min_sum, i);
    }
    return res < 0 ? -1 : res;
}
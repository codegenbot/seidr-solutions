long long minSubArraySum(vector<long long> nums) {
    if (nums.empty()) {
        return LLONG_MAX; // handle empty vector
    }
    
    long long sum = 0;
    long long res = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        sum += nums[i];
        res = min(res, sum);
    }
    return res;
}
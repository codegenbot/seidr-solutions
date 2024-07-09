long long minSubArraySum(vector<long long> nums) {
    long long total = 0, min_sum = INT_MAX;
    for (int i = 0; i < nums.size(); ++i) {
        total += nums[i];
        min_sum = min(min_sum, total);
        if (total > 0) {
            total = 0;
        }
    }
    return min_sum;
}
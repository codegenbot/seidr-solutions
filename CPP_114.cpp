long long minSubArraySum(vector<long long> nums) {
    long long n = nums.size();
    long long min_sum = nums[0];
    long long current_sum = nums[0];
    
    for (long long i = 1; i < n; ++i) {
        current_sum = min(nums[i], current_sum + nums[i]);
        min_sum = min(min_sum, current_sum);
    }
    
    return min_sum;
}
long long minSubArraySum(vector<long long> nums) {
    long long min_sum = nums[0];
    long long cur_sum = 0;
    
    for (long long num : nums) {
        cur_sum = min(num, cur_sum + num);
        min_sum = min(min_sum, cur_sum);
    }
    
    return min_sum;
}
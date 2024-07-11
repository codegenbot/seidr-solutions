long long minSubArraySum(vector<long long> nums) {
    long long min_sum = nums[0], curr_sum = 0;
    
    for (long long num : nums) {
        curr_sum = min(num, curr_sum + num);
        min_sum = min(min_sum, curr_sum);
    }
    
    return min_sum;
}
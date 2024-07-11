long long minSubArraySum(vector<long long> nums){
    long long n = nums.size();
    long long curr_sum = nums[0], min_sum = nums[0];
    
    for (long long i = 1; i < n; i++) {
        curr_sum = min(nums[i], curr_sum + nums[i]);
        min_sum = min(min_sum, curr_sum);
    }
    
    return min_sum;
}
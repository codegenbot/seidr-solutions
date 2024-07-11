long long minSubArraySum(vector<long long> nums){
    long long sum = nums[0];
    long long min_sum = nums[0];
    
    for (int i = 1; i < nums.size(); i++) {
        sum = min(nums[i], sum + nums[i]);
        min_sum = min(min_sum, sum);
    }
    
    return min_sum;
}
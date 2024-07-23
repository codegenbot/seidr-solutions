long long minSubArraySum(vector<long long> nums){
    long long min_sum = nums[0];
    long long sum = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        sum = min(nums[i], sum + nums[i]);
        min_sum = min(min_sum, sum);
    }
    
    return min_sum;
}
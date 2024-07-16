long long minSubArraySum(vector<long long> nums){
    long long min_sum = nums[0];
    long long current_sum = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        min_sum = min(min_sum, current_sum);
        min_sum = min(min_sum, 0LL);
    }
    
    return min_sum;
}
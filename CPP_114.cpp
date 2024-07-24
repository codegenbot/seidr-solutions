long long minSubArraySum(vector<long long> nums){
    long long minimum_sum = nums[0];
    long long current_sum = 0;
    
    for (long long num : nums) {
        current_sum = min(num, current_sum + num);
        minimum_sum = min(minimum_sum, current_sum);
    }
    
    return minimum_sum;
}
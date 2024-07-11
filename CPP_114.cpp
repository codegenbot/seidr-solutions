long long minSubArraySum(vector<long long> nums){
    long long min_sum = nums[0], current_sum = 0;
    for (long long num : nums) {
        current_sum += num;
        min_sum = min(min_sum, current_sum);
        current_sum = min(current_sum, 0LL);
    }
    return min_sum;
}
long long minSubArraySum(vector<long long> nums) {
    long long n = nums.size();
    long long minSum = nums[0];
    long long currentSum = nums[0];
    
    for (long long i = 1; i < n; i++) {
        currentSum = min(nums[i], currentSum + nums[i]);
        minSum = min(minSum, currentSum);
    }
    
    return minSum;
}
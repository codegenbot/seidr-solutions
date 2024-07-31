long long minSubArraySum(vector<long long> nums){
    long long minSum = nums[0], currentSum = 0;
    for (long long num : nums) {
        currentSum += num;
        minSum = min(minSum, currentSum);
        currentSum = min(currentSum, 0LL);
    }
    return minSum;
}
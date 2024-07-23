long long minSubArraySum(vector<long long> nums) {
    long long minSum = nums[0];
    long long currSum = 0;
    
    for (long long num : nums) {
        currSum = min(num, currSum + num);
        minSum = min(minSum, currSum);
    }
    
    return minSum;
}
long long minSubArraySum(vector<long long> nums){
    long long minSum = nums[0], currentSum = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        currentSum += nums[i];
        minSum = min(minSum, currentSum);
        minSum = min(minSum, 0LL); // Ensure that the minimum sum is at least 0
        currentSum = min(currentSum, 0LL); // Reset current sum if it becomes negative
    }
    
    return minSum;
}
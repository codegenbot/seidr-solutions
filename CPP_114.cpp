long long minSubArraySum(vector<long long> nums){
    long long minSum = nums[0];
    long long currentSum = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        currentSum += nums[i];
        minSum = min(minSum, currentSum);
        minSum = min(minSum, 0LL); // Check if the current sum itself is smaller
        currentSum = min(currentSum, 0LL); // Reset the current sum if it's negative
    }
    
    return minSum;
}
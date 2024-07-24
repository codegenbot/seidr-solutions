long long minSum = nums[0];
    long long currentSum = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        if (currentSum < 0) {
            currentSum = nums[i];
        } else {
            currentSum += nums[i];
        }
        
        minSum = min(minSum, currentSum);
    }
    
    return minSum;
}
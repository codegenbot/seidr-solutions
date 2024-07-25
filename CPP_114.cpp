Here is the solution:

long long minSubArraySum(vector<long long> nums){
    long long minSum = LONG_LONG_MAX;
    long long currentSum = 0;

    for(long long num : nums){
        currentSum += num;
        if(currentSum < minSum) minSum = currentSum;
        if(currentSum > 0) currentSum = 0;
    }

    return minSum;
}
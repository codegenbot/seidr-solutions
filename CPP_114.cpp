long long minSubArraySum(vector<long long> nums) {
    if (nums.empty()) return 0;
    long long minSum = INT_MAX;
    long long currentSum = 0;

    for (long long num : nums) {
        currentSum += num;
        minSum = min(minSum, currentSum);
        if (currentSum > 0) {
            currentSum = 0;
        }
    }

    return minSum;
}
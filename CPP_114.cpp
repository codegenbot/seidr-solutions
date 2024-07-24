Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long minSum = LONG_LONG_MAX;
    long long currentSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        currentSum += nums[i];

        if (currentSum < minSum) {
            minSum = currentSum;
        }

        if (currentSum > 0) {
            minSum = min(minSum, currentSum);
        }

        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return minSum;
}
Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long minSum = INT_MAX;
    long long currentSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        currentSum += nums[i];
        if (currentSum > 0) {
            minSum = min(minSum, currentSum);
        } else {
            currentSum = 0;
        }
    }

    return minSum == INT_MAX ? 0 : minSum;
}
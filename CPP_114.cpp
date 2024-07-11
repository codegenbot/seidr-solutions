long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, minSum = INT_MAX;
    for (long long num : nums) {
        sum = min(num, sum + num);
        minSum = min(minSum, sum);
    }
    return minSum;
}
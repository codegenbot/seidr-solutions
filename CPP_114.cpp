Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0;
    long long minSum = LONG_LONG_MAX;

    for (long long i : nums) {
        sum += i;
        if (sum < minSum)
            minSum = sum;
        if (sum > 0)
            sum = 0;
    }
    return minSum;
}
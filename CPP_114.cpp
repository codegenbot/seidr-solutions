Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, minSum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        minSum = min(minSum, sum);
        if (sum > 0)
            sum = 0;
    }
    return minSum;
}
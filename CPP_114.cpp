long long minSubArraySum(vector<long long> nums) {
    long long minSum = nums[0];
    long long sum = 0;

    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        minSum = min(minSum, sum);
        minSum = min(minSum, 0LL);
    }

    return minSum;
}
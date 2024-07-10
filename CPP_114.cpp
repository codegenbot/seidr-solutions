long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long minSum = LLONG_MAX;
    for (int i = 0; i < n; ++i) {
        long long currSum = 0;
        for (int j = i; j < n; ++j) {
            currSum += nums[j];
            if (currSum < minSum)
                minSum = currSum;
        }
    }
    return minSum;
}
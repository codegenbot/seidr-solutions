long long minSubArraySum(vector<long long> nums) {
    long long curSum = 0;
    long long minSum = nums[0];

    for (long long num : nums) {
        curSum = min(num, curSum + num);
        minSum = min(minSum, curSum);
    }

    return minSum;
}
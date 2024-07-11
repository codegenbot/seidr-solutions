long long minSubArraySum(vector<long long> nums) {
    long long currSum = 0, minSum = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
        currSum = min(nums[i], currSum + nums[i]);
        minSum = min(minSum, currSum);
    }
    return minSum;
}
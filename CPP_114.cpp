Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long minSum = LLONG_MAX;
    long long currSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        currSum += nums[i];
        if (currSum > 0) {
            minSum = min(minSum, currSum);
        } else {
            currSum = 0;
        }
    }

    return minSum;
}
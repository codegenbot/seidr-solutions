Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long total = 0;
    long long minSum = LLONG_MAX;

    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < minSum) {
            minSum = total;
        }
        if (total > 0) {
            total = 0;
        }
    }

    return minSum;
}
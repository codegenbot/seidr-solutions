Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long minSum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        long long sum = 0;
        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];
            if (sum < minSum) {
                minSum = sum;
            }
        }
    }
    return minSum;
}
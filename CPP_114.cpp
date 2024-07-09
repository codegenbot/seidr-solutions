Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0;
    long long mini = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < mini) {
            mini = sum;
        }
        if (sum > 0) {
            sum = 0;
        }
    }
    return mini;
}
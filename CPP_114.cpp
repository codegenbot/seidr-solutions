Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long mini = LLONG_MAX;
    long long sum = 0;
    for (long long num : nums) {
        sum += num;
        if (sum < mini) mini = sum;
        if (sum > 0) sum = 0;
    }
    return mini;
}
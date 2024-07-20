Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, mini_sum = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < mini_sum)
            mini_sum = sum;
        if (sum > 0)
            sum = 0;
    }
    return mini_sum;
}
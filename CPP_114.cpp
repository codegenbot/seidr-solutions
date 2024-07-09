Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long mini = INT_MAX;
    long long sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        mini = min(mini, sum);
        if (sum > 0)
            sum = 0;
    }
    return mini;
}
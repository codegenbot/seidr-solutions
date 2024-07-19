Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long current_sum = 0, min_sum = LONG_LONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        min_sum = min(min_sum, current_sum);
        if (current_sum > 0)
            current_sum = 0;
    }
    return min_sum;
}
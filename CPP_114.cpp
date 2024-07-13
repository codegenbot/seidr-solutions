Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LONG_LONG_MAX;
    long long current_sum = 0;

    for (long long num : nums) {
        current_sum += num;
        min_sum = min(min_sum, current_sum);
        if (current_sum < 0)
            current_sum = 0;
    }

    return min_sum;
}
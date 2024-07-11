Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long total_sum = 0, min_sum = LLONG_MAX;
    for (long long i : nums) {
        total_sum += i;
        if (total_sum < min_sum)
            min_sum = total_sum;
        if (total_sum > 0)
            total_sum = 0;
    }
    return min_sum;
}
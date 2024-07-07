long long minSubArraySum(vector<long long> nums) {
    long long min_sum = INT_MAX;
    long long curr_sum = 0;

    for (long long num : nums) {
        curr_sum += num;
        min_sum = min(min_sum, curr_sum);
        if (curr_sum < 0)
            curr_sum = 0;
    }

    return min_sum;
}
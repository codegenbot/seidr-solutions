long long minSubArraySum(vector<long long> nums) {
    long long res = LLONG_MAX;
    long long curr_sum = 0;

    for (long long num : nums) {
        curr_sum += num;
        res = min(res, curr_sum);
        if (curr_sum < 0) {
            curr_sum = 0;
        }
    }

    return res;
}
Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long total = 0;
    long long min_sum = LONG_LONG_MAX;
    for (int start = 0; start < nums.size(); start++) {
        total = 0;
        for (int end = start; end < nums.size(); end++) {
            total += nums[end];
            min_sum = min(min_sum, total);
        }
    }
    return min_sum;
}
Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long total_sum = 0;
    long long min_sum = LLONG_MAX;

    for (int i = 0; i < nums.size(); i++) {
        total_sum += nums[i];
        min_sum = min(min_sum, total_sum);
    }

    return min_sum;
}
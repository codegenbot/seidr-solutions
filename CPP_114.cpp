long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long sum = 0;
    long long min_sum = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (sum < min_sum) {
            min_sum = sum;
        }
        if (sum > 0) {
            sum = 0;
        }
    }

    return min_sum;
}
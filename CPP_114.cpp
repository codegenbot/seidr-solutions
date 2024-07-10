Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long sum = 0;
    long long min_sum = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (sum > min_sum) {
            return min_sum;
        }
        if (i > 0) {
            sum -= nums[i-1];
        }
        if (sum < min_sum) {
            min_sum = sum;
        }
    }
    return min_sum;
}
Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum > 0) {
            min_sum = min(min_sum, sum);
            while (i + 1 < nums.size() && sum >= 0) {
                sum -= nums[i + 1];
            }
        } else {
            sum = 0;
        }
    }
    return min_sum;
}
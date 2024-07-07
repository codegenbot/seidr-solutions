Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum)
            min_sum = sum;
        if (sum > 0) {
            int start = i;
            while (start < nums.size() && sum >= 1) {
                sum -= nums[start];
                start++;
            }
            min_sum = min(min_sum, sum + 1);
        }
    }
    return min_sum;
}
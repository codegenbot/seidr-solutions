Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = LONG_LONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum)
            min_sum = sum;
        if (sum > 0) {
            int start = i;
            while (start < nums.size() && sum >= 1) {
                if (sum < min_sum)
                    min_sum = sum;
                sum -= nums[start++];
            }
        }
    }
    return min_sum;
}
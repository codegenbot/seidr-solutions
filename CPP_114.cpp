Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0;
    long long min_sum = LLONG_MAX;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum)
            min_sum = sum;
        if (sum > 0) {
            while (i < nums.size() && sum >= 0) {
                sum -= nums[i];
                i++;
            }
        }
    }

    return min_sum;
}
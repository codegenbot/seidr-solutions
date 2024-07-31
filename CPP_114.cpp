Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum) {
            min_sum = sum;
        }
        if (sum > 0) {
            int start = i;
            while (start < nums.size() && sum > 0) {
                sum -= nums[start++];
            }
            if (sum == 0) {
                min_sum = min(min_sum, sum);
            }
        }
    }
    return min_sum;
}
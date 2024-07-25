Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0;
    long long min_sum = INT_MAX;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum) {
            min_sum = sum;
        }
        if (sum > 0) {
            int left = i;
            while (left < nums.size() && sum >= 1) {
                sum -= nums[left++];
            }
            if (sum <= 0) {
                min_sum = min(min_sum, sum);
            }
            sum = 0;
        }
    }

    return min_sum;
}
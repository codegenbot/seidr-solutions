int minSubArraySum(vector<long long> nums) {
    int min_sum = INT_MAX;
    int start = 0, end = 0, sum = 0;

    for (end = 0; end < nums.size(); end++) {
        sum += nums[end];

        while (sum >= min_sum && start <= end) {
            min_sum = min_sum > sum - nums[start] ? sum - nums[start] : min_sum;
            sum -= nums[start++];
        }
    }

    return min_sum;
}
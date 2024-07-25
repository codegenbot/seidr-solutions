long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        if (current_sum < min_sum) {
            min_sum = current_sum;
        }
        if (current_sum > 0) {
            int start = i;
            while (start + 1 < nums.size() && current_sum >= 0) {
                start++;
                current_sum -= nums[start];
            }
            if (current_sum < min_sum) {
                min_sum = current_sum + nums[start];
            }
        }
    }

    return min_sum;
}
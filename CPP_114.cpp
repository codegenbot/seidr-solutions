long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long min_sum = LLONG_MAX;
    long long current_sum = 0;

    for (int i = 0; i < n; i++) {
        current_sum += nums[i];

        if (current_sum < min_sum) {
            min_sum = current_sum;
        }

        if (current_sum > 0) {
            int j = i + 1;
            while (j < n && current_sum - nums[j] >= 0) {
                current_sum -= nums[j];
                j++;
            }
            if (current_sum < min_sum) {
                min_sum = current_sum;
            }
        }
    }

    return min_sum;
}
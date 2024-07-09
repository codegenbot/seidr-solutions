long long minSubArraySum(vector<long long> nums) {
    if (nums.empty()) {
        throw invalid_argument("Input vector is empty");
    }

    long long min_sum = LONG_LONG_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];

        if (current_sum < min_sum) {
            min_sum = current_sum;
        }
    }

    return min_sum;
}
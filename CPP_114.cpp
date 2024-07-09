Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LONG_LONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        long long current_sum = 0;
        for (int j = i; j < nums.size(); j++) {
            current_sum += nums[j];
            min_sum = min(min_sum, current_sum);
        }
    }
    return min_sum;
}
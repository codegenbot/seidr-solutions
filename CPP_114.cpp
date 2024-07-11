long long minSubArraySum(vector<long long> nums) {
    long long mini = LLONG_MAX;
    long long current_sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        mini = min(mini, current_sum);
    }
    return mini;
}
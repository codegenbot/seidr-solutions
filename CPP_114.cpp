long long minSubArraySum(vector<long long> nums){
    long long total = 0;
    long long mini = LONG_LONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        mini = min(mini, total);
    }
    return mini;
}
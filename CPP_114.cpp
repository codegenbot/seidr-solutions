long long minSubArraySum(vector<long long> nums) {
    if (nums.empty()) return 0;

    int n = nums.size();
    long long res = LONG_LONG_MAX;
    long long cur_sum = 0;

    for (int i = 0; i < n; i++) {
        cur_sum += nums[i];
        res = min(res, cur_sum);
        if (cur_sum < 0) cur_sum = 0;
    }

    return res;
}
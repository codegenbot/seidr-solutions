long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long res = INT_MAX;
    long long cur_sum = 0;

    for (int i = 0; i < n; i++) {
        cur_sum += nums[i];
        if (cur_sum > res)
            return res;
        if (i == n - 1 || nums[i] + cur_sum > res)
            res = min(res, cur_sum);
    }

    return res;
}
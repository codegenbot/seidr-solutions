long long minSubArraySum(vector<long long> nums) {
    long long res = LLONG_MAX, sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum > res)
            res = sum;
        else if (sum < 0)
            sum = 0;
    }
    return min(res, 0);
}
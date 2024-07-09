long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long res = INT_MAX;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (i > 0) {
            sum -= nums[i-1];
        }
        res = min(res, sum);
    }

    return res;
}
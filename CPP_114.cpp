```
long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long sum = 0;
    long long res = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (sum == 0) continue;
        res = min(res, sum);
    }

    return res;
}
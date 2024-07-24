long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long sum = 0;
    long long ans = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (sum > ans) break;
        ans = min(ans, sum);
    }

    return ans;
}
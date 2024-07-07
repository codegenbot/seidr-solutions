Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }
    long long ans = LLONG_MAX;
    for (int i = 0; i < n; ++i) {
        sum -= nums[i];
        if (sum < ans)
            ans = sum;
    }
    return ans;
}
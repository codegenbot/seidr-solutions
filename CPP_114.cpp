Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long sum = 0;
    long long ans = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (sum < ans) {
            ans = sum;
        }
        if (sum > 0) {
            int j = i;
            while (j < n && sum > 0) {
                sum -= nums[j];
                j++;
            }
            if (sum == 0) {
                ans = min(ans, 0);
            }
        }
    }
    return ans;
}
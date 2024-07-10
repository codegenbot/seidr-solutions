Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    if (n == 0) return 0;
    long long sum = 0, min_sum = INT_MAX;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        min_sum = min(min_sum, sum);
    }
    return min_sum;
}
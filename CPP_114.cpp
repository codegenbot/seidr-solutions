Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long total = 0, minTotal = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        minTotal = min(minTotal, total);
        if (total > 0) total = 0;
    }
    return minTotal;
}
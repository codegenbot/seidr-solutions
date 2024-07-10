Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    if (n == 0)
        return 0;
    long long sum = 0;
    long long min_sum = INT_MAX;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (sum < min_sum) 
            min_sum = sum;
        if (sum > 0)
            sum = 0;
    }
    return min_sum;
}
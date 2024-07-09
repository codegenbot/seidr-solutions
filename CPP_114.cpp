Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    if (n == 0)
        return 0;
    long long min_sum = INT_MAX, curr_sum = 0;
    for (int i = 0; i < n; i++) {
        curr_sum += nums[i];
        min_sum = min(min_sum, curr_sum);
        if (curr_sum > 0) 
            curr_sum = 0;
    }
    return min_sum;
}
long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    if (n == 0)
        return 0;
    
    long long curr_sum = 0;
    long long min_sum = INT_MAX;

    for (int i = 0; i < n; i++) {
        curr_sum += nums[i];
        if (curr_sum > min_sum)
            min_sum = curr_sum;
        else if (curr_sum < 0)
            curr_sum = 0;
    }
    
    return min_sum;
}
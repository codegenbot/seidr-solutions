long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long res = INT_MAX;
    long long curr_sum = 0;

    for (int i = 0; i < n; i++) {
        curr_sum += nums[i];
        res = min(res, curr_sum);
        if (curr_sum > 0) {
            curr_sum = 0;
        }
    }

    return res;
}
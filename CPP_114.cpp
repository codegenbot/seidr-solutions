Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long res = LLONG_MAX;
    long long curr_sum = 0;

    for (int i = 0; i < n; i++) {
        curr_sum += nums[i];
        if (curr_sum > res)
            return -1; // return -1 as per the problem statement
        else if (i == n - 1 || nums[i] < 0)
            res = min(res, curr_sum);
    }
    return res;
}
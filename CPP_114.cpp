Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    if (n == 0)
        return 0;
    long long res = nums[0], curr_sum = nums[0];
    for (int i = 1; i < n; i++) {
        curr_sum = min(nums[i], curr_sum + nums[i]);
        res = min(res, curr_sum);
    }
    return res;
}
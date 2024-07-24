long long minSubArraySum(vector<long long> nums) {
    long long ans = nums[0], cur = 0;
    for (long long num : nums) {
        cur = min(num, cur + num);
        ans = min(ans, cur);
    }
    return ans;
}
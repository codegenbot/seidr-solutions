long long minSubArraySum(vector<long long> nums){
    long long ans = nums[0], sum = 0;
    for (long long num : nums) {
        sum = min(num, sum + num);
        ans = min(ans, sum);
    }
    return ans;
}
long long minSubArraySum(vector<long long> nums){
    long long ans = nums[0], sum = 0;
    for(auto x: nums){
        sum = min(x, sum + x);
        ans = min(ans, sum);
    }
    return ans;
}
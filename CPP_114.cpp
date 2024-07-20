Here is the solution:

long long minSubArraySum(vector<long long> nums){
    int n = nums.size();
    long long sum = 0;
    long long ans = LLONG_MAX;
    for(int i=0; i<n; i++){
        sum += nums[i];
        if(sum < ans) ans = sum;
        if(sum > 0) break;
    }
    if(ans == LLONG_MAX)
        return *min_element(nums.begin(), nums.end());
    else
        return ans;
}
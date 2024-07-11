Here is the solution:

long long minSubArraySum(vector<long long> nums){
    int n = nums.size();
    long long ans = LLONG_MAX;
    long long cur_sum = 0;
    
    for(int i=0; i<n; i++){
        cur_sum += nums[i];
        
        if(cur_sum < ans)
            ans = cur_sum;
        
        if(cur_sum > 0)
            cur_sum = 0;
    }
    
    return min(ans,0);
}
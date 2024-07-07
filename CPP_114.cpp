Here is the solution:

long long minSubArraySum(vector<long long> nums){
    int n = nums.size();
    long long sum = 0;
    long long mini_sum = LLONG_MAX;

    for(int i=0; i<n; i++){
        sum += nums[i];
        if(sum < mini_sum)
            mini_sum = sum;
        else
            while(sum > mini_sum && i < n-1){
                sum -= nums[i++];
            }
    }

    return mini_sum;
}
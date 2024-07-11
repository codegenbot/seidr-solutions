Here is the completed code:

long long minSubArraySum(vector<long long> nums){
    long long sum = INT_MAX;
    long long current_sum = 0;
    
    for(long long i = 0; i < nums.size(); i++){
        current_sum += nums[i];
        
        if(current_sum < sum)
            sum = current_sum;
        
        if(current_sum > 0)
            current_sum = 0;
    }
    
    return sum;
}
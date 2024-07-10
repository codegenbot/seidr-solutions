Here is the solution:

long long minSubArraySum(vector<long long> nums){
    long long sum = INT_MAX; // Initialize sum to infinity
    long long curr_sum = 0;

    for(long long num : nums){ 
        curr_sum += num; 
        if(curr_sum < sum)
            sum = curr_sum;
        if(curr_sum > 0) 
            curr_sum = 0;
    }
    
    return sum;
}
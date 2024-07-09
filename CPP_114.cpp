Here is the completed code:

long long minSubArraySum(vector<long long> nums){
    long long min_sum = INT_MAX; // Initialize minimum sum as maximum possible value
    long long current_sum = 0;
    
    for(long long num : nums){ 
        current_sum += num;
        
        if(current_sum < min_sum) // Update the minimum sum
            min_sum = current_sum;
        
        if(current_sum > 0) // Reset current sum to 0 when it becomes positive
            current_sum = 0;    
    }
    
    return min_sum;
}
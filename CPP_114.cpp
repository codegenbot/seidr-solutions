Here is the completed code:

long long minSubArraySum(vector<long long> nums){
    long long min_sum = LLONG_MAX; // Initialize minimum sum to be maximum possible value
    long long current_sum = 0; // Initialize current sum
    
    for(long long i = 0; i < nums.size(); i++){
        current_sum += nums[i]; // Add the current number to the current sum
        
        if(current_sum < min_sum){ 
            min_sum = current_sum; // Update minimum sum if it's less than the current sum
        }
        
        if(current_sum > 0){ // If the current sum is greater than zero, reset the current sum
            current_sum = 0;
        }
    }
    
    return min_sum;
}
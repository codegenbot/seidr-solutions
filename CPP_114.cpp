Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LONG_LONG_MAX; // Initialize minimum sum to be maximum possible value
    long long current_sum = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];
        
        if (current_sum < min_sum) {
            min_sum = current_sum;
        }
        
        // Reset the sum when it becomes negative
        if (current_sum < 0) {
            current_sum = 0;
        }
    }
    
    return min_sum;
}
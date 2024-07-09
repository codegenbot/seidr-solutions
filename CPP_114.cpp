Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LLONG_MAX; // Initialize with max value
    long long current_sum = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i]; // Add each number to the sum
        
        if (current_sum < min_sum) { // Update the minimum sum if necessary
            min_sum = current_sum;
        }
        
        if (current_sum > 0) { // Reset the sum when it becomes negative
            current_sum = 0;
        }
    }
    
    return min_sum;
}
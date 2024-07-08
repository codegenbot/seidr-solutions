Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long total = 0;
    long long min_sum = LLONG_MAX;
    
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        
        if (total < min_sum)
            min_sum = total;
        
        if (total > 0) {
            int left = i;
            total -= nums[left];
            
            while (total <= 0 && left < nums.size()) {
                total += nums[left];
                left++;
            }
            
            if (total <= 0)
                min_sum = min(min_sum, total);
        }
    }
    
    return min_sum;
}
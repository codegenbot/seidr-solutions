long long minSubArraySum(vector<long long> nums) {
    long long total = 0;
    long long min_sum = LLONG_MAX;
    
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        
        if (total < min_sum)
            min_sum = total;
        
        if (total > 0) {
            int start = i;
            while (start > 0 && total >= 1) {
                total -= nums[start - 1];
                start--;
            }
            if (total <= 0)
                min_sum = min(min_sum, total);
        }
    }
    
    return min_sum;
}
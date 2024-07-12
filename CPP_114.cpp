long long minSubArraySum(vector<long long> nums) {
    if (nums.empty()) return 0;

    int start = 0;
    long long sum = 0;
    long long res = INT_MAX;
    
    for (int end = 0; end < nums.size(); end++) {
        sum += nums[end];
        
        while (sum >= 0) {
            res = min(res, sum);
            sum -= nums[start++];
        }
    }
    
    return -res;
}
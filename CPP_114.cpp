long long minSubArraySum(vector<long long> nums) {
    if (nums.empty()) return 0; // If nums is empty, return 0 as sum
    long long min_sum = INT_MAX;
    for(int i = 0; i < nums.size(); i++) { 
        long long sum = 0; 
        for(int j = i; j < nums.size(); j++) {
            sum += nums[j]; // Calculate the sum of sub-vector
            if(sum < min_sum) min_sum = sum;
        }
    } 
    return min_sum;
}
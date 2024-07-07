Here is the solution:

long long minSubArraySum(vector<long long> nums){
    long long mini = INT_MAX; // Initialize minimum sum as maximum possible value
    long long current_sum = 0;
    for (long long num : nums) {
        current_sum += num;
        if (current_sum < mini)
            mini = current_sum;
        else if (current_sum > 0)
            current_sum = 0; // Reset current sum
    }
    return mini;
}
Here is the solution to the problem:

long long minSubArraySum(vector<long long> nums) {
    long long curr_sum = 0, min_sum = numeric_limits<long long>::max();
    for (long long num : nums) {
        curr_sum += num;
        min_sum = min(min_sum, curr_sum);
        if (curr_sum < 0)
            curr_sum = 0;
    }
    return min_sum;
}
Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LLONG_MAX, current_sum = 0;
    for (long long num : nums) {
        current_sum += num;
        if (current_sum < min_sum)
            min_sum = current_sum;
        else if (current_sum > 0)
            current_sum = 0;
    }
    return min_sum;
}
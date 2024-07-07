Here is the completed code:

long long minSubArraySum(vector<long long> nums) {
    long long min_sum = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
        long long curr_sum = 0;
        for (int j = i; j < nums.size(); j++) {
            curr_sum += nums[j];
            if (curr_sum < min_sum) {
                min_sum = curr_sum;
            }
        }
    }
    return min_sum;
}
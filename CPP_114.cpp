Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long sum = 0;
    long long mini_sum = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum = 0;
        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];
            if (sum < mini_sum) {
                mini_sum = sum;
            }
        }
    }
    return mini_sum;
}
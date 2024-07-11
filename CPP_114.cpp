Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    long long mini = INT_MAX;
    long long sum = 0;

    for (long long i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if (sum < mini) {
            mini = sum;
        }

        if (sum > 0) {
            while (sum > 0 && i < nums.size() - 1) {
                sum -= nums[i];
                i++;
            }
        }
    }

    return mini;
}
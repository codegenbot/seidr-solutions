Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long res = LLONG_MAX;
    long long sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += nums[i];
        if (sum < res) {
            res = sum;
        }
        if (sum > 0) {
            sum = 0;
        }
    }

    return res;
}
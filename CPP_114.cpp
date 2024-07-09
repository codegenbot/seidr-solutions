Here is the solution:

long long minSubArraySum(vector<long long> nums) {
    int n = nums.size();
    long long sum = 0;
    long long res = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (sum < res)
            res = sum;
        else if (sum > 0) {
            int j = i + 1;
            while (j < n && sum > 0) {
                sum -= nums[j];
                j++;
            }
        }
    }

    return res;
}
```
long long minSubArraySum(vector<long long> nums) {
    long long min_sum = INT_MAX;
    int n; 
    cout << "Enter the size of array: ";
    cin >> n;
    nums.resize(n);
    for (int start = 0; start < nums.size(); start++) {
        long long sum = 0;
        for (int end = start; end < nums.size(); end++) {
            sum += nums[end];
            if (sum < min_sum) {
                min_sum = sum;
            }
        }
    }
    return min_sum;
}
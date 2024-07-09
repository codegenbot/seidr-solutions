long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    for (int start = 0; start < nums.size(); ++start) {
        long long current_sum = 0;
        for (int end = start; end < nums.size(); ++end) {
            current_sum += nums[end];
            if (current_sum < min_sum) {
                min_sum = current_sum;
            }
        }
    }
    return min_sum;
}

int main() {
    vector<long long> nums = {2,3,4};
    cout << "Minimum sum of subarray: " << minSubArraySum(nums) << endl;
    return 0;
}
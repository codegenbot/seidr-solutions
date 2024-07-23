```
Problem description: Minimum Size Subarray Sum

Given an array of integers `nums`, find the minimum size subarray (contiguous elements) with a sum that is less than or equal to `target`. If no such subarray exists, return 0.

Complete the following code given the task description and function signature.

```
long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];

        if (current_sum < min_sum) {
            min_sum = current_sum;
        }

        if (current_sum > 0) {
            current_sum = 0;
        }
    }

    return min_sum;
}

int main() {
    vector<long long> nums = {1, -1};
    long long result = minSubArraySum(nums);
    cout << "Result: " << result << endl;
    return 0;
}
```
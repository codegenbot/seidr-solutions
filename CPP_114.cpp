```cpp
CPP/114

Given an array of integers nums, find the minimum sum of a subarray that meets the condition: the sum of the subarray is non-negative.

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
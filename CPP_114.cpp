long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LLONG_MAX; // Initialize minimum sum as maximum possible value
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); ++i) {
        current_sum += nums[i]; // Calculate the sum of sub-vector

        if (current_sum < min_sum) { // Update minimum sum if necessary
            min_sum = current_sum;
        }

        if (current_sum > 0) { // Reset current sum when it becomes negative
            current_sum = 0;
        }
    }

    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
    return 0;
}
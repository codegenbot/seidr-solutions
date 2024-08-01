```cpp
long long minSubArraySum(vector<long long> nums) {
    long long min_sum = INT_MAX;
    long long current_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        current_sum += nums[i];

        if (current_sum > min_sum) {
            min_sum = current_sum;
        } else {
            current_sum = 0;
        }
    }

    return min_sum;
}

int main() {
    vector<long long> test_nums = {1, -1};
    assert(minSubArraySum(test_nums) == -1);
    return 0;
}
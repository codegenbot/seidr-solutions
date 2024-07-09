long long minSubArraySum(vector<long long> nums) {
    long long sum = 0;
    long long min_sum = LLONG_MAX;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < min_sum)
            min_sum = sum;
        if (sum > 0) {
            while (sum > 0 && i < nums.size() - 1) {
                sum -= nums[i];
                i++;
            }
        }
    }

    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
    return 0;
}
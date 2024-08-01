long long minSubArraySum(vector<long long> nums) {
    long long min_sum = LLONG_MAX;
    long long curr_sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        curr_sum += nums[i];
        if (curr_sum > min_sum) {
            break;
        }
        min_sum = min(min_sum, curr_sum);
    }

    return min_sum;
}

int main() {
    assert(minSubArraySum({1, -1}) == 0);
    return 0;
}
long long minSubArraySum(vector<long long> nums) {
    long long res = LLONG_MAX, sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        res = min(res, sum);
        if (sum < 0) sum = 0;
    }
    return res;
}

int main() {
    assert(minSubArraySum({1, -1}) == -1);
    // Add more test cases as needed
    return 0;
}
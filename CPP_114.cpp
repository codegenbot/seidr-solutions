```cpp
long long minSubArraySum(vector<long long> nums) {
    long long sum = 0, min_sum = LLONG_MAX;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        min_sum = min(min_sum, sum);
        if (sum > 0) sum = 0;
    }
    return min_sum;
}

int main() {
    vector<long long> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;
        nums.push_back(num);
    }
    cout << minSubArraySum(nums) << endl;
    return 0;
}
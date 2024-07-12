int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    int total_sum = accumulate(nums.begin(), nums.end(), 0);
    int left_sum = 0;
    int right_sum = total_sum;
    int idx = -1;
    int min_diff = INT_MAX;
    for (int i = 0; i < nums.size(); ++i) {
        left_sum += nums[i];
        right_sum -= nums[i];
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }
    for (int i = 0; i <= idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = idx + 1; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    return 0;
}
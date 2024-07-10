int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    int total_sum = accumulate(nums.begin(), nums.end(), 0);
    int left_sum = 0;
    int min_diff = INT_MAX;
    int split_idx = -1;
    for (int i = 0; i < nums.size(); ++i) {
        left_sum += nums[i];
        int right_sum = total_sum - left_sum;
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            split_idx = i;
        }
    }
    for (int i = 0; i <= split_idx; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = split_idx + 1; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    return 0;
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int idx = 0, min_diff = INT_MAX;

    for (int i = 1; i < n; i++) {
        int left_sum = accumulate(nums.begin(), nums.begin() + i, 0);
        int right_sum = accumulate(nums.begin() + i, nums.end(), 0);
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }

    for (int i = 0; i < idx; i++) {
        cout << nums[i] << endl;
    }
    for (int i = idx; i < n; i++) {
        cout << nums[i] << endl;
    }

    return 0;
}
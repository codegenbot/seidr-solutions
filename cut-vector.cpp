int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int min_diff = INT_MAX;
    int cut_idx = -1;

    for (int i = 0; i < n-1; ++i) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j <= i; ++j) {
            left_sum += nums[j];
        }
        for (int j = i + 1; j < n; ++j) {
            right_sum += nums[j];
        }
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }

    for (int i = 0; i <= cut_idx; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = cut_idx + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }

    return 0;
}
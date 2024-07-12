int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int sum = accumulate(nums.begin(), nums.end(), 0);
    int prefix_sum = 0;
    int min_diff = INT_MAX;
    int idx = -1;
    for (int i = 0; i < n; ++i) {
        prefix_sum += nums[i];
        int diff = abs(sum - 2 * prefix_sum);
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        }
    }

    vector<int> subvector1(nums.begin(), nums.begin() + idx + 1);
    vector<int> subvector2(nums.begin() + idx + 1, nums.end());

    for (int num : subvector1) {
        cout << num << endl;
    }
    for (int num : subvector2) {
        cout << num << endl;
    }

    return 0;
}
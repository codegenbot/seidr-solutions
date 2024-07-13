int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int diff = INT_MAX;
    int idx = 0;

    for (int i = 0; i < n - 1; ++i) {
        if (abs(accumulate(nums.begin(), nums.begin() + i + 1, 0) - accumulate(nums.begin() + i + 1, nums.end(), 0)) < diff) {
            diff = abs(accumulate(nums.begin(), nums.begin() + i + 1, 0) - accumulate(nums.begin() + i + 1, nums.end(), 0));
            idx = i;
        }
    }

    for (int i = 0; i <= idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = idx + 1; i < n; ++i) {
        cout << nums[i] << endl;
    }

    return 0;
}
int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int idx = 0;
    int diff = INT_MAX;
    for (int i = 1; i < nums.size(); ++i) {
        int left_sum = accumulate(nums.begin(), nums.begin() + i, 0);
        int right_sum = accumulate(nums.begin() + i, nums.end(), 0);
        int current_diff = abs(left_sum - right_sum);
        if (current_diff < diff) {
            diff = current_diff;
            idx = i;
        }
    }

    for (int i = 0; i < idx; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = idx; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }

    return 0;
}
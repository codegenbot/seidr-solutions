int main() {
    int n, val;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> val;
        nums[i] = val;
    }

    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 1; i < n; ++i) {
        int sum_left = accumulate(nums.begin(), nums.begin() + i, 0);
        int sum_right = accumulate(nums.begin() + i, nums.end(), 0);
        int diff = abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
        if (diff == 0) {
            break;
        }
    }

    for (int i = 0; i < cut_index; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = cut_index; i < n; ++i) {
        cout << nums[i] << endl;
    }

    return 0;
}
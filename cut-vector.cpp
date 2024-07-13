int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int min_diff = INT_MAX;
    int cut_index = 0;
    for (int i = 1; i < nums.size(); i++) {
        int left_sum = accumulate(nums.begin(), nums.begin() + i, 0);
        int right_sum = accumulate(nums.begin() + i, nums.end(), 0);
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    for (int i = 0; i < cut_index; i++) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cut_index; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }

    return 0;
}
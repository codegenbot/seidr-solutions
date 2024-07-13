int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int left_sum = 0, right_sum = accumulate(nums.begin(), nums.end(), 0);
    int min_diff = INT_MAX;
    int cut_index = -1;

    for (int i = 0; i < nums.size(); ++i) {
        left_sum += nums[i];
        right_sum -= nums[i];
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff || (diff == min_diff && abs(left_sum) < abs(right_sum))) {
            min_diff = diff;
            cut_index = i;
        }
    }

    for (int i = 0; i <= cut_index; ++i) {
        cout << nums[i] << endl;
    }
    for (int i = cut_index + 1; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }

    return 0;
}
int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    int total_sum = 0;
    for (int num : nums) {
        total_sum += num;
    }
    int left_sum = 0;
    int right_sum = total_sum;
    int min_diff = total_sum;
    int cut_index = -1;

    for (int i = 0; i < nums.size(); ++i) {
        left_sum += nums[i];
        right_sum -= nums[i];
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
        if (diff == 0) {
            break;
        }
    }

    for (int i = 0; i <= cut_index; ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;
    for (int i = cut_index + 1; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    cout << 0 << endl;

    return 0;
}
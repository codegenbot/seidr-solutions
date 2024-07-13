int main() {
    int n, sum;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        sum += nums[i];
    }

    int half_sum = 0;
    int cut_idx = -1;
    for (int i = 0; i < n; ++i) {
        half_sum += nums[i];
        if (half_sum * 2 >= sum) {
            cut_idx = i;
            break;
        }
    }

    vector<int> subvec1(nums.begin(), nums.begin() + cut_idx + 1);
    vector<int> subvec2(nums.begin() + cut_idx + 1, nums.end());

    for (int num : subvec1) {
        cout << num << "\n";
    }
    for (int num : subvec2) {
        cout << num << "\n";
    }

    return 0;
}
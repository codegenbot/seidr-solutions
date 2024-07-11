int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int half_sum = sum / 2;
    int curr_sum = 0;
    int idx = 0;
    for (int i = 0; i < nums.size(); i++) {
        curr_sum += nums[i];
        if (curr_sum >= half_sum) {
            idx = i;
            break;
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
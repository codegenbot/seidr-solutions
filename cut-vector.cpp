int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int total = 0;
    for (int num : nums) {
        total += num;
    }

    int sum = 0;
    int idx = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum >= total - sum) {
            idx = i;
            break;
        }
    }

    for (int i = 0; i <= idx; ++i) {
        cout << nums[i] << endl;
    }

    cout << 0 << endl;

    return 0;
}
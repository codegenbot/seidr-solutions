int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        nums.push_back(n);
    }

    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += max(0, nums[i] / 3 - 2);
    }

    cout << sum << endl;

    return 0;
}
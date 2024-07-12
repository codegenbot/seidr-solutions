int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int sum = 0, index = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
        if (sum < 0) {
            cout << index << endl;
            return 0;
        }
        index++;
    }
    return 0;
}
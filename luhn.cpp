int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int num = nums[i];
        if ((n - i) % 2 == 0) {
            num *= 2;
            if (num > 9) {
                num -= 9;
            }
        }
        sum += num;
    }

    cout << sum << endl;

    return 0;
}
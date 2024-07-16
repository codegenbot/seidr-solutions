int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; ++i) {
        cin >> digits[i];
    }

    int sum = 0;
    for (int i = n - 1; i >= 0; --i) {
        if ((n - i) % 2 == 0) {
            int digit = digits[i] * 2;
            sum += digit > 9 ? digit - 9 : digit;
        } else {
            sum += digits[i];
        }
    }

    cout << sum << endl;

    return 0;
}
int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; ++i) {
        cin >> digits[i];
    }

    int sum = 0;
    for (int i = n - 2; i >= 0; i -= 2) {
        int temp = digits[i] * 2;
        if (temp > 9) {
            temp -= 9;
        }
        digits[i] = temp;
    }

    for (int i = 0; i < n; ++i) {
        sum += digits[i];
    }

    cout << sum << endl;

    return 0;
}
int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; ++i) {
        cin >> digits[i];
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if ((i % 2) == 1) {
            int double_digit = digits[i] * 2;
            sum += (double_digit > 9) ? double_digit - 9 : double_digit;
        } else {
            sum += digits[i];
        }
    }

    cout << sum << endl;
    
    return 0;
}
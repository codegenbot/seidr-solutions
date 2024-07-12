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
            int double_digit = digits[i] * 2;
            sum += (double_digit > 9) ? double_digit - 9 : double_digit;
        } else {
            sum += digits[i];
        }
    }
    
    cout << sum << endl;
    
    return 0;
}
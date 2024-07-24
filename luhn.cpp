int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; ++i) {
        cin >> digits[i];
    }
    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 1) {
            int doubleDigit = digits[i] * 2;
            sum += (doubleDigit > 9) ? doubleDigit - 9 : doubleDigit;
        } else {
            sum += digits[i];
        }
    }
    
    cout << sum << endl;
    
    return 0;
}
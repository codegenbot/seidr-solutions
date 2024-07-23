int main() {
    vector<int> digits(16);
    for (int i = 0; i < 16; ++i) {
        cin >> digits[i];
    }
    
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        if (i % 2 == 1) {
            int doubleDigit = digits[i] * 2;
            sum += doubleDigit > 9 ? doubleDigit - 9 : doubleDigit;
        } else {
            sum += digits[i];
        }
    }
    
    cout << sum << endl;
    
    return 0;
}
int main() {
    vector<int> digits(16);
    for (int i = 0; i < 16; ++i) {
        cin >> digits[i];
    }
    
    int sum = 0;
    for (int i = 1; i <= 16; ++i) {
        int digit = digits[i-1];
        if (i % 2 == 0) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
    }
    
    cout << sum << endl;
    
    return 0;
}
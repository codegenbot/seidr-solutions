int main() {
    vector<int> digits(16);
    for (int i = 0; i < 16; ++i) {
        cin >> digits[i];
    }
    
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        if (i % 2 == 1) {
            int doubled_digit = digits[i] * 2;
            sum += (doubled_digit > 9) ? doubled_digit - 9 : doubled_digit;
        } else {
            sum += digits[i];
        }
    }
    
    cout << sum;
    
    return 0;
}
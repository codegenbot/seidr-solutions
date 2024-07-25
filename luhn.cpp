int main() {
    vector<int> digits(16);
    int sum = 0;
    
    for (int i = 0; i < 16; ++i) {
        cin >> digits[i];
    }
    
    for (int i = 0; i < 16; ++i) {
        if (i % 2 != 0) {
            digits[i] *= 2;
            if (digits[i] > 9) {
                digits[i] -= 9;
            }
        }
        sum += digits[i];
    }
    
    cout << sum << endl;
    
    return 0;
}
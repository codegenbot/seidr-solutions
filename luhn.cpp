int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; ++i) {
        cin >> digits[i];
    }
    
    int sum = 0;
    for (int i = n - 1; i >= 0; --i) {
        int num = digits[i];
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
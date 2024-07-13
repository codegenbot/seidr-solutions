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
            int num = digits[i] * 2;
            sum += (num > 9) ? num - 9 : num;
        } else {
            sum += digits[i];
        }
    }
    
    cout << sum << endl;
    
    return 0;
}
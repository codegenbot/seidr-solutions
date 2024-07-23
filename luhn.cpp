int main() {
    int n = 16;
    vector<int> card(n);
    
    for (int i = 0; i < n; i++) {
        cin >> card[i];
    }
    
    int sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        if ((n - i) % 2 == 0) {
            int digit = card[i] * 2;
            sum += (digit > 9) ? digit - 9 : digit;
        } else {
            sum += card[i];
        }
    }
    
    cout << sum << endl;
    
    return 0;
}
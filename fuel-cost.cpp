int main() {
    int n;
    cin >> n;
    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        sum += max(0, x / 3 - 2);
    }
    
    cout << sum;
    
    return 0;
}
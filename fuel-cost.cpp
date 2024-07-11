int main() {
    int n, x;
    cin >> n;
    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        sum += (x / 3) - 2;
    }
    
    cout << sum << endl;
    
    return 0;
}
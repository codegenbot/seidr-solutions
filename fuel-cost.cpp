int main() {
    int n;
    cin >> n;
    int sum = 0;
    
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        sum += max(num / 3 - 2, 0);
    }
    
    cout << sum;
    
    return 0;
}
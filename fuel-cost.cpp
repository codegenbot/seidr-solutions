int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += v[i] / 3 - 2;
    }
    
    cout << sum;
    
    return 0;
}
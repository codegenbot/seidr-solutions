int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += vec[i];
        if (sum < 0) {
            cout << i << endl;
            return 0;
        }
    }
    
    cout << 0 << endl;
    return 0;
}
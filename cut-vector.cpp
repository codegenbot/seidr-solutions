int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        sum += vec[i];
    }
    
    int half_sum = 0;
    for (int i = 0; i < n; ++i) {
        half_sum += vec[i];
        if (2 * half_sum == sum || 2 * half_sum + vec[i + 1] == sum) {
            for (int j = 0; j <= i; ++j) {
                cout << vec[j] << endl;
            }
            cout << 0 << endl;
            break;
        }
    }
    
    return 0;
}
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum += v[i];
    }
    int prefix_sum = 0;
    for (int i = 0; i < n; ++i) {
        prefix_sum += v[i];
        if (prefix_sum * 2 >= sum) {
            cout << i + 1 << endl;
            for (int j = 0; j <= i; ++j) {
                cout << v[j] << endl;
            }
            for (int j = i + 1; j < n; ++j) {
                cout << 0 << endl;
            }
            break;
        }
    }
    return 0;
}
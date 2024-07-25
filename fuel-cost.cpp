int main() {
    vector<int> v;
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        v.push_back((n / 3) - 2);
    }
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
    }
    cout << sum;
    return 0;
}
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum += max(0, v[i] / 3 - 2);
    }
    cout << sum << endl;
    return 0;
}
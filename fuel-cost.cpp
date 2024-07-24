int main() {
    int n;
    cin >> n;
    vector<int> values(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> values[i];
        sum += values[i] / 3 - 2;
    }
    cout << sum << endl;
    return 0;
}
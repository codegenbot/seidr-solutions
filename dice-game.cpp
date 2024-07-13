int main() {
    int n, m;
    cin >> n >> m;
    double ans = 0.0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i && j <= m; ++j) {
            ans += 1.0 / (n * m);
        }
    }
    cout << ans << endl;
    return 0;
}
int main() {
    int n, m;
    cin >> n >> m;
    double res = 0.0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                res += 1.0 / (n * m);
            }
        }
    }
    cout << fixed << setprecision(2) << res << endl;
    return 0;
}
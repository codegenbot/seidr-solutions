int main() {
    int n, m;
    cin >> n >> m;
    double result = 0.0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i && j <= m; ++j) {
            result += 1.0 / (n * m);
        }
    }
    cout << fixed << setprecision(2) << result;
    return 0;
}
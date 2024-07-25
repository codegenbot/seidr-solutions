int main() {
    int n, m;
    cin >> n >> m;
    double total_outcomes = n * m;
    double favorable_outcomes = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i && j <= m; ++j) {
            favorable_outcomes += 1;
        }
    }
    cout << fixed << setprecision(2) << favorable_outcomes / total_outcomes << endl;
    return 0;
}
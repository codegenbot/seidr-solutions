int main() {
    int n, m;
    cin >> n >> m;
    double total = n * m;
    double count = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i && j <= m; ++j) {
            count += 1;
        }
    }
    cout << fixed << setprecision(2) << count / total << endl;
    return 0;
}
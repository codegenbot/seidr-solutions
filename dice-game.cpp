int main() {
    int n, m;
    cin >> n >> m;
    double prob = 0.0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                prob += 1;
            }
        }
    }
    prob /= (n * m);
    cout << prob << endl;
    return 0;
}
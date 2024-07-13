int main() {
    int n, m;
    cin >> n >> m;
    double probability = 0.0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i && j <= m; ++j) {
            probability += 1.0 / (n * m);
        }
    }
    cout << probability << endl;
    return 0;
}
int main() {
    int n, m;
    cin >> n >> m;
    double total_ways = n * m;
    double count_ways = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i && j <= m; ++j) {
            count_ways += 1;
        }
    }
    double probability = count_ways / total_ways;
    cout << fixed << setprecision(2) << probability << endl;
    return 0;
}
int main() {
    int n, m;
    cin >> n >> m;
    double total_outcomes = n * m;
    double favorable_outcomes = 0;
    for (int i = 1; i <= n; ++i) {
        favorable_outcomes += (double)(i - 1) / n;
    }
    cout << favorable_outcomes / total_outcomes;
    return 0;
}
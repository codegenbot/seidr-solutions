int main() {
    int n, m;
    cin >> n >> m;
    double total_outcomes = (double)n * m;
    double favorable_outcomes = 0.0;
    for (int i = 1; i <= n; ++i) {
        favorable_outcomes += ((double)(i - 1) / n) * (m);
    }
    double probability = favorable_outcomes / total_outcomes;
    cout << probability << endl;
    return 0;
}
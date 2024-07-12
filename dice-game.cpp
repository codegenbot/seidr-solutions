int main() {
    int n, m;
    cin >> n >> m;
    double total_outcomes = n * m;
    double favorable_outcomes = 0;
    for (int i = 1; i <= n; i++) {
        favorable_outcomes += (i - 1) * m;
    }
    double probability = favorable_outcomes / total_outcomes;
    cout << fixed << probability;
    return 0;
}
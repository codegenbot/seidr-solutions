int main() {
    int n, m;
    cin >> n >> m;
    double total_outcomes = n * m;
    double count_favorable_outcomes = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i && j <= m; j++) {
            count_favorable_outcomes += 1;
        }
    }
    cout << count_favorable_outcomes / total_outcomes << endl;
    return 0;
}
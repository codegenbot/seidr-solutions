int main() {
    int n, m;
    cin >> n >> m;
    
    double total_outcomes = n * m;
    double favorable_outcomes = 0;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                favorable_outcomes++;
            }
        }
    }
    
    double probability = favorable_outcomes / total_outcomes;
    cout << fixed << setprecision(2) << probability << endl;
    
    return 0;
}
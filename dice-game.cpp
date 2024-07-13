int main() {
    int n, m;
    cin >> n >> m;
    
    double total_outcomes = n * m;
    double count = 0;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                count++;
            }
        }
    }
    
    double probability = count / total_outcomes;
    cout << fixed << setprecision(2) << probability << endl;
    
    return 0;
}
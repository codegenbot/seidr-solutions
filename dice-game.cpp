int main() {
    int n, m;
    cin >> n >> m;
    
    double total_ways = n * m;
    double count = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i && j <= m; j++) {
            count += 1;
        }
    }
    
    double probability = count / total_ways;
    cout << fixed << probability << endl;
    
    return 0;
}
int main() {
    int n, m;
    cin >> n >> m;
    double probability = 0.0;
    
    for (int i = 1; i <= n; i++) {
        probability += (double)i / n * min((m - 1), n) / m;
    }
    
    cout << probability << endl;
    
    return 0;
}
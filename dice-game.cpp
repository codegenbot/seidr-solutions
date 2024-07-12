int main() {
    int n, m;
    cin >> n >> m;
    double probability = 0.0;
    
    if(n <= m) {
        probability = (m - n) / (2.0 * m);
    } else {
        probability = (n - m - 1) / (2.0 * n);
    }
    
    cout << probability << endl;
    
    return 0;
}
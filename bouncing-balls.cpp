int main() {
    double h0, h;
    int n;
    
    cin >> h0 >> h >> n;
    
    double bounciness = h / h0;
    double total_distance = h0;
    
    for (int i = 0; i < n; i++) {
        total_distance += 2 * h;
        h *= bounciness;
    }
    
    cout << total_distance << endl;
    
    return 0;
}
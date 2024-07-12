int main() {
    double h0, hb, bounciness;
    int n;
    cin >> h0 >> hb >> n;
    
    bounciness = hb / h0;
    double total_distance = h0 + hb;
    for (int i = 1; i < n; ++i) {
        total_distance += 2 * hb;
        hb *= bounciness;
        total_distance += hb;
    }
    
    cout << total_distance << endl;
    
    return 0;
}
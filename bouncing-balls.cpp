int main() {
    double h0, b, bi;
    int n;
    cin >> h0 >> b >> n;
    bi = b / h0;
    double total_distance = h0 + b; 
    for (int i = 2; i <= n; i++) {
        total_distance += 2 * bi * total_distance;
    }
    cout << total_distance << endl;
    return 0;
}
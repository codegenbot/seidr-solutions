int main() {
    double h0, h, bi;
    int n;
    cin >> h0 >> h >> n;

    bi = h / h0;
    double total_distance = h0;

    for (int i = 0; i < n; ++i) {
        total_distance += h + h * bi;
        h *= bi;
    }

    cout << total_distance << endl;
    
    return 0;
}
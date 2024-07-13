int main() {
    double h0, h1;
    int n;
    cin >> h0 >> h1 >> n;
    double b = h1 / h0;
    double total_dist = h0 + h1;
    if (b != 1.0) {
        total_dist += h1 * (1 - pow(b, n)) / (1 - b);
    } else {
        total_dist += h1 * n;
    }
    cout << total_dist << endl;
    return 0;
}
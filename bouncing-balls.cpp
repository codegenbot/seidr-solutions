int main() {
    double h0, h1;
    int n;
    cin >> h0 >> h1 >> n;
    double b = h1 / h0;
    double total_distance = h0 * (1 - pow(b, n + 1)) / (1 - b);
    cout << total_distance + h0 << endl;
    return 0;
}
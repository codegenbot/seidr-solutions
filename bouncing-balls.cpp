int main() {
    double h0, h1, bi;
    int n;
    cin >> h0 >> h1 >> n;
    bi = h1 / h0;
    double total_distance = h0 + h0 * (1 - pow(bi, n)) / (1 - bi);
    cout << total_distance << endl;
    return 0;
}
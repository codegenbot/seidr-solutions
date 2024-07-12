int main() {
    double h0, h1, b;
    cin >> h0 >> h1 >> b;
    double bi = h1 / h0;
    double total_distance = h0;
    for (int i = 1; i <= b; ++i) {
        total_distance += 2 * h0 * pow(bi, i);
    }
    cout << total_distance << endl;
    return 0;
}
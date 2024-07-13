int main() {
    double h0, h1, b;
    cin >> h0 >> h1 >> b;
    double bi = h1 / h0;
    double total_distance = h0 + h1;
    for (int i = 2; i <= b; ++i) {
        total_distance += 2 * h1 / pow(bi, i);
    }
    cout << total_distance << endl;
    return 0;
}
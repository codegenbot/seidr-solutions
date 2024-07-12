int main() {
    double h0, h1, b;
    cin >> h0 >> h1 >> b;
    double bi = h1 / h0;
    double total_distance = h0 + h0 * (1 + bi * 2) * (pow(b, 2) - 1) / (bi - 1);
    cout << total_distance << endl;
    return 0;
}
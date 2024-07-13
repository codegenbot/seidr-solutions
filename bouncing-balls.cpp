int main() {
    double h1, h2, b;
    cin >> h1 >> h2 >> b;
    double bi = h2 / h1;
    double total_distance = h1 + h2;
    for (int i = 1; i < b; ++i) {
        total_distance += 2 * h2;
        h2 *= bi;
    }
    cout << total_distance << endl;
    return 0;
}
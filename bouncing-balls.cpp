int main() {
    double h, b;
    int n;
    cin >> h >> b >> n;
    double bi = b / h;
    double total_distance = h + b;
    for (int i = 2; i <= n; ++i) {
        total_distance += b / pow(bi, i - 1);
    }
    cout << total_distance << endl;
    return 0;
}
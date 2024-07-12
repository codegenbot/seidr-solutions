int main() {
    double h0, h, b;
    int n;
    cin >> h0 >> h >> n;
    double bi = h / h0;
    double total_distance = h0 + h * (1 + bi) * (1 - pow(bi, n)) / (1 - bi);
    cout << total_distance << endl;
    return 0;
}
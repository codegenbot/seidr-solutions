int main() {
    double h, b;
    int n;
    cin >> h >> b >> n;
    double ratio = b / h;
    double total_distance = h + (h * ratio) * (pow(ratio, n) - 1) / (ratio - 1);
    cout << total_distance << endl;
    return 0;
}
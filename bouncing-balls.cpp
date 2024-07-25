int main() {
    double h, h1;
    int n;
    cin >> h >> h1 >> n;
    double bounciness = h1 / h;
    double total_distance = h + h1;
    for (int i = 1; i < n; i++) {
        total_distance += 2 * h1 * pow(bounciness, i);
    }
    cout << fixed;
    cout.precision(15);
    cout << total_distance << endl;
    return 0;
}
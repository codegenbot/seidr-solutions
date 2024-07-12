int main() {
    double h0, h1;
    int n;
    cin >> h0 >> h1 >> n;
    double bounciness_index = h1 / h0;
    double total_distance = h0 + h1;
    for (int i = 2; i <= n; ++i) {
        total_distance += 2 * h1 * pow(bounciness_index, i - 1);
    }
    cout << total_distance << endl;
    return 0;
}
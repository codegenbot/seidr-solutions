int main() {
    double h0, h1, bi;
    int n;
    cin >> h0 >> h1 >> n;

    bi = h1 / h0;
    double distance = h0 + h1;

    for (int i = 1; i < n; ++i) {
        distance += 2 * h1;
        h1 *= bi;
        distance += h1;
    }

    cout << distance << endl;

    return 0;
}
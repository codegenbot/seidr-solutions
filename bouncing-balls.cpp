int main() {
    double h0, h1, b;
    cin >> h0 >> h1 >> b;
    double bi = h1 / h0;
    double distance = h0;
    for (int i = 0; i < b; ++i) {
        distance += 2 * h1;
        h1 *= bi;
    }
    cout << distance << endl;
    return 0;
}
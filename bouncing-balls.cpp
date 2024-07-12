int main() {
    double h1, h2;
    int n;
    cin >> h1 >> h2 >> n;

    double bouncinessIndex = h2 / h1;
    double totalDistance = h1 + h2;

    for (int i = 1; i < n; ++i) {
        totalDistance += 2 * h1 * pow(bouncinessIndex, i);
    }

    cout << totalDistance << endl;

    return 0;
}
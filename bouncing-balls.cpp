int main() {
    double h0, hb;
    int n;
    cin >> h0 >> hb >> n;
    double bouncinessIndex = hb / h0;
    double totalDistance = h0 + h0 * (1 + bouncinessIndex) * (1 - pow(bouncinessIndex, n)) / (1 - bouncinessIndex);
    cout << totalDistance << endl;
    return 0;
}
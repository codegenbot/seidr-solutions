int main() {
    double h0, hb, bouncinessIndex, totalDistance;
    int bounces;

    cin >> h0 >> hb >> bounces;

    bouncinessIndex = hb / h0;
    totalDistance = h0 + (h0 + hb) * (1 - pow(bouncinessIndex, bounces)) / (1 - bouncinessIndex);

    cout << totalDistance << endl;

    return 0;
}
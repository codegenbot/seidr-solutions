int main() {
    double h0, h1, bouncinessIndex, totalDistance;
    int numBounces;

    cin >> h0 >> h1 >> numBounces;

    bouncinessIndex = h1 / h0;
    totalDistance = h0 + h1;

    for (int i = 2; i <= numBounces; i++) {
        totalDistance += 2 * h1;
        h1 *= bouncinessIndex;
    }

    cout << totalDistance << endl;

    return 0;
}
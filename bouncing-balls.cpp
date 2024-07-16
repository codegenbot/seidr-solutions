int main() {
    double h0, h1, bouncinessIndex;
    int numBounces;
    cin >> h0 >> h1 >> numBounces;

    bouncinessIndex = h1 / h0;
    double totalDistance = h0 + h1; // First bounce
    for (int i = 1; i < numBounces; i++) {
        totalDistance += 2 * h1; // Up and down
        h1 *= bouncinessIndex;
    }

    cout << totalDistance << endl;
    return 0;
}
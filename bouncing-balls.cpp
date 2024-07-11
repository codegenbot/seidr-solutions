int main() {
    double startingHeight, heightAfterFirstBounce, bouncinessIndex;
    int numBounces;
    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    bouncinessIndex = heightAfterFirstBounce / startingHeight;
    double totalDistance = startingHeight + heightAfterFirstBounce;

    for (int i = 2; i <= numBounces; ++i) {
        totalDistance += 2 * heightAfterFirstBounce;
        heightAfterFirstBounce *= bouncinessIndex;
        totalDistance += heightAfterFirstBounce;
    }

    cout << totalDistance << endl;

    return 0;
}
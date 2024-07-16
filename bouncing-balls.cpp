int main() {
    double startHeight, firstBounceHeight, totalBounces;
    cin >> startHeight >> firstBounceHeight >> totalBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;
    double totalDistance = startHeight;

    for (int i = 0; i < totalBounces; ++i) {
        totalDistance += 2 * startHeight * pow(bouncinessIndex, i);
    }

    cout << totalDistance << endl;

    return 0;
}
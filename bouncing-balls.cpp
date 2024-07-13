int main() {
    double startHeight, firstBounceHeight, bouncinessIndex, totalDistance;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    bouncinessIndex = firstBounceHeight / startHeight;
    totalDistance = startHeight + firstBounceHeight;

    for (int i = 1; i < numBounces; ++i) {
        totalDistance += 2 * firstBounceHeight;
        firstBounceHeight *= bouncinessIndex;
    }

    printf("%.15f\n", totalDistance);

    return 0;
}
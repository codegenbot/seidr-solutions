double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight;
    double previousBounceHeight = firstBounceHeight;

    for (int i = 0; i < numBounces; i++) {
        previousBounceHeight /= bouncinessIndex;
        totalDistance += 2 * previousBounceHeight;
    }

    return totalDistance;
}
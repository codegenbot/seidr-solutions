double calculateTotalDistance(double startingHeight, double firstBounceHeight, double numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = firstBounceHeight + startingHeight;

    for (int i = 1; i <= numBounces; i++) {
        double bounceHeight = firstBounceHeight * bouncinessIndex;
        totalDistance += 2 * bounceHeight;
        firstBounceHeight = bounceHeight;
    }

    return totalDistance;
}
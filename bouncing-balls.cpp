double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight;

    double heightAfterBounces = startingHeight * bouncinessIndex;

    for (int i = 1; i <= numBounces; i++) {
        totalDistance += (2 * heightAfterBounces);
        heightAfterBounces *= bouncinessIndex;
    }

    return totalDistance;
}
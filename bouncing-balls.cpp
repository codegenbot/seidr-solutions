double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;
    double distanceCovered = firstBounceHeight;

    for (int i = 1; i <= numBounces; i++) {
        distanceCovered *= bouncinessIndex;
        totalDistance += 2 * distanceCovered;
    }

    return totalDistance;
}
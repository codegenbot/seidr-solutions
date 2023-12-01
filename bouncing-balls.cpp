double calculateTotalDistance(double startingHeight, double firstBounceHeight, double numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = 2 * firstBounceHeight;

    for (int i = 1; i < numBounces; i++) {
        double bounceHeight = firstBounceHeight * std::pow(bouncinessIndex, i);
        totalDistance += 2 * bounceHeight * bouncinessIndex;
    }

    return totalDistance;
}
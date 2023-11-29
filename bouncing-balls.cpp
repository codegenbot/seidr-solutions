long double calculateTotalDistance(double startingHeight, double bouncinessIndex, int numBounces) {
    long double totalDistance = startingHeight;
    double currentHeight = startingHeight * bouncinessIndex;

    for (int i = 1; i < numBounces; i++) {
        totalDistance += currentHeight * 2;
        currentHeight *= bouncinessIndex;
    }

    return totalDistance;
}
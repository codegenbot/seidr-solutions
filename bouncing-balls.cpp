double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * firstBounceHeight;
        startingHeight *= bouncinessIndex;
        firstBounceHeight *= bouncinessIndex;
    }
    
    return totalDistance;
}
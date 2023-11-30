double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;
    double currentHeight = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * currentHeight;
        currentHeight *= bouncinessIndex;
    }
    
    return totalDistance;
}
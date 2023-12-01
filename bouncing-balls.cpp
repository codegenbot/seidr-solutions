double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    startingHeight /= 2;
    double totalDistance = startingHeight;
    
    for (int i = 0; i < numBounces - 1; i++) {
        totalDistance += startingHeight * 2;
        startingHeight *= bouncinessIndex;
    }
    
    return totalDistance;
}
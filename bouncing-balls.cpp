double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += (2 * bouncinessIndex * startingHeight);
    }
    
    return totalDistance;
}
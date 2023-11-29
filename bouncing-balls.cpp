double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;
    
    for (int i = 0; i < numBounces - 1; i++) {
        totalDistance += 2 * bouncinessIndex * totalDistance;
    }
    
    bouncinessIndex = sqrt(bouncinessIndex);
    
    return totalDistance;
}
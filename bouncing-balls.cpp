int main() {
    double startHeight, bounceHeight, bouncinessIndex, totalDistance;
    int numBounces;
    
    cin >> startHeight >> bounceHeight >> numBounces;
    
    bouncinessIndex = bounceHeight / startHeight;
    totalDistance = startHeight + bounceHeight;
    
    for (int i = 1; i < numBounces; ++i) {
        bounceHeight *= bouncinessIndex;
        totalDistance += bounceHeight * 2;
    }
    
    printf("%.15f\n", totalDistance);
    
    return 0;
}
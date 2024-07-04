int main() {
    double startingHeight, firstBounceHeight;
    int numberOfBounces;
    
    cin >> startingHeight >> firstBounceHeight >> numberOfBounces;
    
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight; // Initial drop

    double currentHeight = firstBounceHeight;
    for (int i = 0; i < numberOfBounces; ++i) {
        totalDistance += 2 * currentHeight; // Up and down for each bounce
        currentHeight *= bouncinessIndex;
    }

    printf("%.15f\n", totalDistance);
    return 0;
}
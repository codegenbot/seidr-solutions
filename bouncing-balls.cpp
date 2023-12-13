```cpp
double calculateBouncinessIndex(double startingHeight, double firstBounceHeight);

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance *= bouncinessIndex;
    }

    return totalDistance;
}

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}
```
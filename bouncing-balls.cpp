#include <iostream>

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;
    double distanceCovered = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        distanceCovered *= bouncinessIndex;
        totalDistance += distanceCovered;
    }

    return totalDistance;
}
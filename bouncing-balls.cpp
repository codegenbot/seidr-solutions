#include <iostream>

long double calculateTotalDistance(long double startingHeight, long double firstBounceHeight, int numBounces) {
    long double bouncinessIndex = firstBounceHeight / startingHeight;
    long double totalDistance = startingHeight;
    long double distanceCovered = firstBounceHeight;

    for (int i = 1; i < numBounces; i++) {
        totalDistance += 2 * distanceCovered;
        distanceCovered *= bouncinessIndex;
    }

    return totalDistance;
}

int main() {
    long double startingHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    long double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    std::cout << totalDistance << "\n";

    return 0;
}
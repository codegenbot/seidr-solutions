#include <iostream>
#include <cmath>

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = std::pow(firstBounceHeight / startingHeight, 1.0 / numBounces);
    double totalDistance = startingHeight;
    double distanceCovered = firstBounceHeight;

    for (int i = 1; i <= numBounces; i++) {
        totalDistance += 2 * distanceCovered;
        distanceCovered *= bouncinessIndex;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    std::cout << totalDistance << "\n";

    return 0;
}
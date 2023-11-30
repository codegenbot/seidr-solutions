#include <iostream>
#include <cmath>

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;
    double distanceCovered = startingHeight;

    for (int i = 1; i <= numBounces; i++) {
        distanceCovered *= pow(bouncinessIndex, i);
        totalDistance += 2 * distanceCovered;
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
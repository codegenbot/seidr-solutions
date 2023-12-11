#include <iostream>

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += startingHeight + firstBounceHeight;
        startingHeight = firstBounceHeight;
        firstBounceHeight *= bouncinessIndex;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);

    std::cout << totalDistance << std::endl;

    return 0;
}
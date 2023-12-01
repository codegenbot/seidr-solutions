#include <iostream>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double firstBounceHeight, double numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = firstBounceHeight + startingHeight;

    for (int i = 1; i <= numBounces; i++) {
        double bounceHeight = firstBounceHeight * bouncinessIndex;
        totalDistance += 2 * bounceHeight;
        firstBounceHeight = bounceHeight;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight, numBounces;
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);

    std::cout << totalDistance << std::endl;

    return 0;
}
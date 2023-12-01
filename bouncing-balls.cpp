#include <iostream>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight;
    double previousBounceHeight = firstBounceHeight;

    for (int i = 0; i < numBounces; i++) {
        previousBounceHeight /= bouncinessIndex;
        totalDistance += 2 * previousBounceHeight;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cout << "Enter starting height: ";
    std::cin >> startingHeight;

    std::cout << "Enter height after the first bounce: ";
    std::cin >> firstBounceHeight;

    std::cout << "Enter number of bounces: ";
    std::cin >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);

    std::cout << "Total distance traveled: " << totalDistance << std::endl;

    return 0;
}
#include <iostream>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight);

double calculateTotalDistance(double startingHeight, double firstBounceHeight, double numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * totalDistance;
    }

    return totalDistance;
}

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

int main() {
    double startingHeight, firstBounceHeight, numBounces;

    std::cout << "Enter the starting height: ";
    std::cin >> startingHeight;
    std::cout << "Enter the height after the first bounce: ";
    std::cin >> firstBounceHeight;
    std::cout << "Enter the number of bounces: ";
    std::cin >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    std::cout << totalDistance << std::endl;

    return 0;
}
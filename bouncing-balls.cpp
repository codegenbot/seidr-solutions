#include <iostream>
#include <iomanip>
#include <cmath>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    bouncinessIndex = std::round(bouncinessIndex * 1e14) / 1e14;
    return bouncinessIndex;
}

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight;
    double currentBounceHeight = firstBounceHeight;

    for (int i = 1; i <= numBounces; i++) {
        totalDistance += currentBounceHeight * 2;
        currentBounceHeight *= bouncinessIndex;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cout << std::fixed << std::setprecision(14);
    std::cin >> startingHeight;
    std::cin >> firstBounceHeight;
    std::cin >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    std::cout << totalDistance << std::endl;

    return 0;
}
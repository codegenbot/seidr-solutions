#include <iostream>
#include <iomanip>
#include <cmath>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double firstBounceHeight, double numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = 2 * firstBounceHeight;

    for (int i = 2; i <= numBounces; i++) {
        totalDistance += 2 * firstBounceHeight * std::pow(bouncinessIndex, i);
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight, numBounces;

    std::cout << std::fixed << std::setprecision(17);
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    std::cout << totalDistance << std::endl;

    return 0;
}
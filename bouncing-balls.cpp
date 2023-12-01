#include <iostream>
#include <iomanip>
#include <cmath>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double firstBounceHeight, double numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight + 2 * firstBounceHeight;

    for (double i = 2; i <= numBounces; i++) {
        firstBounceHeight *= bouncinessIndex;
        totalDistance += 2 * firstBounceHeight;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight, numBounces;

    std::cout << std::fixed << std::setprecision(15);
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    std::cout << totalDistance << std::endl;

    return 0;
}
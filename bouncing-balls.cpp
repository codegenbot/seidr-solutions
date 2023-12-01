#include <iostream>
#include <iomanip>
#include <cmath>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight;
    double currentBounceHeight = firstBounceHeight;

    for (int i = 0; i < numBounces; i++) {
        currentBounceHeight *= pow(bouncinessIndex, i+1);
        totalDistance += 2 * currentBounceHeight;
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
#include <iostream>
#include <iomanip>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

long double calculateTotalDistance(double startingHeight, double bouncinessIndex, int numBounces) {
    long double totalDistance = startingHeight;

    for (int i = 0; i < numBounces - 1; i++) {
        totalDistance += 2 * (bouncinessIndex * startingHeight);
        startingHeight *= bouncinessIndex;
    }

    totalDistance += startingHeight; 

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    long double totalDistance = calculateTotalDistance(startingHeight, bouncinessIndex, numBounces);

    std::cout << std::fixed << std::setprecision(10) << totalDistance << std::endl;

    return 0;
}
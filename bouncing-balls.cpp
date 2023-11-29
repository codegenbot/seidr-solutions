#include <iostream>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

long double calculateTotalDistance(double startingHeight, double bouncinessIndex, int numBounces) {
    long double totalDistance = startingHeight;
    double currentHeight = startingHeight * bouncinessIndex;

    for (int i = 1; i < numBounces; i++) {
        totalDistance += currentHeight * 2;
        currentHeight *= bouncinessIndex;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    long double totalDistance = calculateTotalDistance(startingHeight, bouncinessIndex, numBounces);

    std::cout << totalDistance << std::endl;

    return 0;
}
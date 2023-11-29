#include <iostream>

long double calculateBouncinessIndex(long double startingHeight, long double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

long double calculateTotalDistance(long double startingHeight, long double bouncinessIndex, int numBounces) {
    long double totalDistance = 0;
    long double currentHeight = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += currentHeight;
        currentHeight *= bouncinessIndex;
        totalDistance += currentHeight;
    }

    return totalDistance;
}

int main() {
    long double startingHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    long double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    long double totalDistance = calculateTotalDistance(startingHeight, bouncinessIndex, numBounces);

    std::cout << totalDistance << std::endl;

    return 0;
}
#include <iostream>

float calculateBouncinessIndex(float startingHeight, float firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

float calculateTotalDistance(float startingHeight, float firstBounceHeight, int numBounces) {
    float bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    float totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * totalDistance;
    }

    return totalDistance;
}

int main() {
    float startingHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    float totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);

    std::cout << totalDistance << std::endl;

    return 0;
}
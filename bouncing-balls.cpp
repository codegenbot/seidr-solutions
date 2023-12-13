#include <iostream>
#include <string>

float calculateBouncinessIndex(float startingHeight, float firstBounceHeight);

float calculateTotalDistance(float startingHeight, float firstBounceHeight, int numBounces) {
    float bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    float totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * totalDistance;
    }

    return totalDistance;
}

float calculateBouncinessIndex(float startingHeight, float firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

int main() {
    float startingHeight, firstBounceHeight;
    int numBounces;

    std::cout << "Enter the starting height: ";
    std::cin >> startingHeight;

    std::cout << "Enter the height after the first bounce: ";
    std::cin >> firstBounceHeight;

    std::cout << "Enter the number of bounces: ";
    std::cin >> numBounces;

    float totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    std::cout << "Total distance traveled: " << totalDistance << std::endl;

    return 0;
}
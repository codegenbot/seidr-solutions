#include <iostream>

double calculateBounceDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * firstBounceHeight;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    double totalDistance = calculateBounceDistance(startingHeight, firstBounceHeight, numBounces);

    std::cout << totalDistance << std::endl;

    return 0;
}
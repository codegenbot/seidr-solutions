#include <iostream>

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight + firstBounceHeight;

    for (int i = 2; i <= numBounces; i++) {
        bouncinessIndex *= 2;
        firstBounceHeight *= bouncinessIndex;
        totalDistance += 2 * firstBounceHeight;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startingHeight;
    std::cin >> firstBounceHeight;
    std::cin >> numBounces;

    double distance = calculateDistance(startingHeight, firstBounceHeight, numBounces);
    std::cout << distance;

    return 0;
}
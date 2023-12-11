#include <iostream>

double calculateDistance(double startHeight, double bounceIndex, int numBounces) {
    double totalDistance = startHeight;
    double currentHeight = startHeight;

    for (int i = 0; i < numBounces; i++) {
        double bounceHeight = currentHeight * bounceIndex;
        totalDistance += 2 * bounceHeight;
        currentHeight = bounceHeight;
    }

    return totalDistance;
}

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;
    std::cin >> startHeight >> firstBounceHeight >> numBounces;

    double bounceIndex = firstBounceHeight / startHeight;

    double distance = calculateDistance(startHeight, bounceIndex, numBounces);

    std::cout << distance << std::endl;

    return 0;
}
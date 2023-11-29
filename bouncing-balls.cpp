#include <iostream>
#include <cmath>

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startingHeight;
    std::cin >> firstBounceHeight;
    std::cin >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;

    double bounceDistance = 2 * firstBounceHeight;
    totalDistance += bounceDistance;

    for (int i = 1; i < numBounces; i++) {
        bounceDistance *= bouncinessIndex;
        totalDistance += bounceDistance;
    }

    std::cout << totalDistance << std::endl;

    return 0;
}
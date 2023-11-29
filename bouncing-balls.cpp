#include <iostream>
#include <cmath>

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startingHeight;
    std::cin >> firstBounceHeight;
    std::cin >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * (bouncinessIndex * startingHeight);
        bouncinessIndex = std::sqrt(bouncinessIndex);
    }

    std::cout << totalDistance << std::endl;

    return 0;
}
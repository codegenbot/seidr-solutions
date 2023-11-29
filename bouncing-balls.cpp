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

    for (int i = 0; i < numBounces - 1; i++) {
        totalDistance += 2 * bouncinessIndex * totalDistance;
    }

    bouncinessIndex = std::sqrt(bouncinessIndex);

    std::cout << totalDistance;

    return 0;
}
#include <iostream>
#include <cmath>

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;

    for (int i = 0; i < numBounces - 1; i++) {
        totalDistance += 2 * bouncinessIndex * (totalDistance / bouncinessIndex);
    }

    std::cout << totalDistance << std::endl;

    return 0;
}
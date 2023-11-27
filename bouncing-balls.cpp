#include <iostream>
#include <cmath>

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        bouncinessIndex = sqrt(bouncinessIndex);
        totalDistance += 2 * startingHeight * bouncinessIndex;
    }

    std::cout << totalDistance << std::endl;

    return 0;
}
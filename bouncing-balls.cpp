#include <iostream>
#include <cmath>

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        bouncinessIndex = std::sqrt(bouncinessIndex);
        totalDistance += (bouncinessIndex * totalDistance);
    }

    std::cout.precision(17);
    std::cout << totalDistance << std::endl;

    return 0;
}
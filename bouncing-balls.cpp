#include <iostream>

int main() {
    double startingHeight, firstBounce, bouncinessIndex;
    int numBounces;
    std::cin >> startingHeight >> firstBounce >> numBounces;

    bouncinessIndex = firstBounce / startingHeight;

    double totalDistance = startingHeight;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * totalDistance;
    }

    std::cout << totalDistance << std::endl;

    return 0;
}
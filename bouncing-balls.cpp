#include <iostream>

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += startingHeight;
        startingHeight *= bouncinessIndex;
        totalDistance += startingHeight;
    }

    std::cout << totalDistance << std::endl;

    return 0;
}
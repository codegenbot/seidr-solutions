#include <iostream>

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startingHeight;

    // Calculate total distance
    double totalDistance = 2.0 * (1 - pow(bouncinessIndex, numBounces)) / (1 - bouncinessIndex);

    std::cout << totalDistance << std::endl;

    return 0;
}
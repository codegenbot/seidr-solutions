#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex, totalDistance;

    std::cin >> startingHeight >> firstBounceHeight;
    bouncinessIndex = firstBounceHeight / startingHeight;

    int numBounces;
    std::cin >> numBounces;

    totalDistance = (1 + 2 * bouncinessIndex) * (1 - pow(bouncinessIndex, 2)) * numBounces;

    std::cout << std::fixed << std::setprecision(5) << totalDistance << "\n";
    return 0;
}
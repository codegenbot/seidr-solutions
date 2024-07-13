```cpp
#include <iostream>
#include <cmath>

int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex, totalDistance;

    std::cin >> startingHeight >> firstBounceHeight;
    bouncinessIndex = firstBounceHeight / startingHeight;

    int numBounces;
    std::cin >> numBounces;

    totalDistance = (1 + 2 * bouncinessIndex) * (1 - pow(bouncinessIndex, 2)) * numBounces;

    std::cout << std::fixed << std::setprecision(5);
    std::cout << totalDistance << "\n";
    return 0;
}
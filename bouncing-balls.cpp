#include <iostream>

int main() {
    double startHeight, firstBounce, bounciness;
    int numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;

    if (startHeight == 0) {
        std::cout << "Error: Starting height cannot be zero." << std::endl;
        return 1;
    }

    bounciness = firstBounce / startHeight;

    double totalDistance = 2.0; // The ball travels twice the starting height after the first bounce
    for (int i = 1; i < numBounces; ++i) {
        totalDistance += (bounciness * (startHeight + 2 * totalDistance)) - startHeight;
    }

    std::cout << std::fixed << std::setprecision(6) << totalDistance << std::endl;

    return 0;
}
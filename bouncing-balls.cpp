#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;
    if (numBounces == 0) {
        std::cout << "0.0" << std::endl;
        return 0;
    }
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += startingHeight * (1 - std::pow(bouncinessIndex, i + 1));
    }
    std::cout << std::fixed << std::setprecision(12) << totalDistance << std::endl;
    return 0;
}
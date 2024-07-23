#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double startHeight, firstBounce;
    int numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
        startHeight /= bouncinessIndex;
    }

    std::cout << std::fixed << std::setprecision(4);
    std::cout << totalDistance << std::endl;

    return 0;
}
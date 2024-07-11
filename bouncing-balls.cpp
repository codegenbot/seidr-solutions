#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double startHeight, firstBounce;
    int numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex);
    }

    std::cout << std::fixed << std::setprecision(5);
    std::cout << bouncinessIndex << std::endl;
    std::cout << totalDistance + 1.0 << std::endl;

    return 0;
}
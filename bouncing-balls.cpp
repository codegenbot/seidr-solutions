#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(2, -i) * startHeight * bouncinessIndex;
    }

    std::cout << std::fixed << std::setprecision(5);
    std::cout << totalDistance << std::endl;

    return 0;
}
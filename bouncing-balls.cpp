#include <iostream>

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    std::cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -0.5 * i) * (startHeight + (firstBounceHeight - startHeight) * pow(bouncinessIndex, i));
    }

    std::cout << std::fixed << std::setprecision(4) << totalDistance << '\n';

    return 0;
}
#include <iostream>

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    std::cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex) * startHeight * (2.0 * i - 1.0);
    }

    std::cout << fixed << setprecision(4) << totalDistance << std::endl;

    return 0;
}
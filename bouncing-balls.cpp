#include <iostream>

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;
    double totalDistance = 0.0;

    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, 1 - (double)i) * startHeight * bouncinessIndex;
    }

    std::cout << fixed << setprecision(6);
    std::cout << totalDistance << '\n';

    return 0;
}
#include <iostream>

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    std::cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
    }

    std::cout << fixed << setprecision(4);
    std::cout << totalDistance << std::endl;

    return 0;
}
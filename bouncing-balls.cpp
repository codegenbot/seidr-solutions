#include <iostream>

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    std::cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -bouncinessIndex);
    }

    std::cout << fixed << setprecision(4) << totalDistance << '\n';

    return 0;
}
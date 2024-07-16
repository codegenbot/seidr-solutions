#include <iostream>

int main() {
    double startHeight, firstBounce;
    int numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.0;

    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -i) * startHeight * (bouncinessIndex - 1);
    }

    std::cout << fixed << setprecision(4) << totalDistance << std::endl;

    return 0;
}
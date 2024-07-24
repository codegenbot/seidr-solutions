#include <iostream>

int main() {
    double startHeight, firstBounce;
    int numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;

    double bounciness = firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -1) * (startHeight + (startHeight - 2 * startHeight + firstBounce) * bounciness);
    }

    std::cout << totalDistance << std::endl;

    return 0;
}
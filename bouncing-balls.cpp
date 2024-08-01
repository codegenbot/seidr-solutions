#include <iostream>

int main() {
    double startHeight, firstBounce;
    int numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 0.5 * (1 + bouncinessIndex) * (startHeight - firstBounce);

    for(int i = 2; i <= numBounces; i++) {
        totalDistance += 0.5 * pow((1 + bouncinessIndex), i) * (firstBounce - startHeight);
    }

    std::cout << totalDistance << std::endl;

    return 0;
}
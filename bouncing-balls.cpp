#include <iostream>

int main() {
    double startHeight, firstBounce;
    int numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = (firstBounce / startHeight);

    double totalDistance = 2 * ((1 + bouncinessIndex) * (1 - bouncinessIndex)) * (numBounces * (numBounces + 1));

    std::cout << totalDistance << std::endl;

    return 0;
}
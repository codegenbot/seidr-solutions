#include <iostream>

int main() {
    double startHeight;
    double firstBounceHeight;

    std::cin >> startHeight >> firstBounceHeight;

    double bouncinessIndex = firstBounceHeight / startHeight;

    int numBounces;

    std::cin >> numBounces;

    double totalDistance = 0.0;
    for(int i=1; i<=numBounces; ++i) {
        totalDistance += (startHeight * (1 - pow(0.5, i))) / startHeight;
    }

    std::cout << bouncinessIndex << "\n";
    std::cout << totalDistance << "\n";

    return 0;
}
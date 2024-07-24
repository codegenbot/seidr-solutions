#include <iostream>

int main() {
    double startHeight, firstBounce;
    int numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;

    // Calculate bounciness index (height of first bounce / starting height)
    double bouncinessIndex = firstBounce / startHeight;

    // Calculate total distance that the ball travels
    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += startHeight * (1 - pow(1 - bouncinessIndex, i));
    }

    std::cout << std::setprecision(6) << totalDistance << std::endl;

    return 0;
}
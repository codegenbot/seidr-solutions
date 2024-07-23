#include <iostream>

int main() {
    double startingHeight, firstBounceHeight;
    std::cin >> startingHeight >> firstBounceHeight;

    double bouncinessIndex = firstBounceHeight / startingHeight;

    int numBounces;
    std::cin >> numBounces;

    double totalDistance = (1 + 2 + 3 + ... + (2 * numBounces));
    totalDistance *= bouncinessIndex;

    std::cout << "The total distance traveled by the ball is: " << std::fixed << std::setiosflags(std::ios::floatfield, std::ios::fixed) << std::setprecision(6) << totalDistance << std::endl;
    return 0;
}
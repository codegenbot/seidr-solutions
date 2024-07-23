#include <iostream>

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cout << "Enter the starting height: ";
    std::cin >> startingHeight;

    std::cout << "Enter the height after the first bounce: ";
    std::cin >> firstBounceHeight;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    int totalDistance = 0;

    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += 2 * (startingHeight + (firstBounceHeight - startingHeight) * pow(0.5, i));
    }

    std::cout << "The bounciness index is: " << std::fixed << std::setiosflags(std::ios::floatfield, std::ios::fixed) << std::setprecision(6) << bouncinessIndex << std::endl;
    std::cout << "The total distance traveled by the ball is: " << std::fixed << std::setiosflags(std::ios::floatfield, std::ios::fixed) << std::setprecision(6) << totalDistance << std::endl;

    return 0;
}
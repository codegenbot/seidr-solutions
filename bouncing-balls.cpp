#include <cmath>
#include <iostream>
#include <iomanip>

int main() {
    double startHeight, firstBounce, bouncinessIndex;
    int numBounces;

    std::cout << "Enter the starting height: ";
    std::cin >> startHeight;

    std::cout << "Enter the height after the first bounce: ";
    std::cin >> firstBounce;

    std::cout << "Enter the number of bounces: ";
    std::cin >> numBounces;

    bouncinessIndex = (firstBounce / startHeight) * (1 - 2/(startHeight + firstBounce));
    double totalDistance = 0;

    double height = startHeight;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += ((height * bouncinessIndex) - height);
        height *= bouncinessIndex;
    }

    std::cout << "The total distance traveled by the ball is: " << std::fixed << std::setprecision(2) << totalDistance << std::endl;

    return 0;
}
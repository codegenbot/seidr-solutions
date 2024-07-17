#include <iostream>

int main() {
    int totalDistance = 0;
    int numBounces;
    double startingHeight;
    double firstBounce;

    std::cout << "Enter number of bounces: ";
    std::cin >> numBounces;

    std::cout << "Enter starting height: ";
    std::cin >> startingHeight;

    std::cout << "Enter first bounce height: ";
    std::cin >> firstBounce;

    double bouncinessIndex = firstBounce / startingHeight;

    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += 2 * (startingHeight * bouncinessIndex - startingHeight);
    }

    std::cout << "Total distance traveled: " << totalDistance << std::endl;
    return 0;
}
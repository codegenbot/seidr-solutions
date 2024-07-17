#include <iostream>

int main() {
    int totalDistance = 0;
    int numBounces;
    double startingHeight;
    double bouncinessIndex;

    std::cout << "Enter number of bounces: ";
    std::cin >> numBounces;

    std::cout << "Enter starting height: ";
    std::cin >> startingHeight;

    int height;
    std::cout << "Enter first bounce height: ";
    std::cin >> height;
    bouncinessIndex = static_cast<double>(height) / startingHeight;

    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += 2 * (startingHeight * bouncinessIndex - startingHeight);
    }

    std::cout << "Total distance traveled: " << totalDistance << std::endl;
    return 0;
}
#include <iostream>
#include <cmath>

int main() {
    double startHeight = 0;
    double heightAfterFirstBounce = 0;

    std::cin >> startHeight >> heightAfterFirstBounce;

    if(std::cin.fail()) {
        std::cout << "Invalid input. Please enter numbers for the starting height and first bounce height." << std::endl;
        return 1; // Exit with error code
    }

    double bouncinessIndex = pow(heightAfterFirstBounce / startHeight, 0.5);

    int numBounces;

    std::cin >> numBounces;

    if(std::cin.fail()) {
        std::cout << "Invalid input. Please enter a number for the number of bounces." << std::endl;
        return 1; // Exit with error code
    }

    double totalDistance = (1 + numBounces) * startHeight * pow(bouncinessIndex, 2);

    std::cout << "The total distance traveled by the ball is: " << totalDistance << std::endl;

    return 0;
}
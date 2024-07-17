#include <iostream>
#include <cmath>

int main() {
    int totalDistance = 0;
    int numBounces;
    double startingHeight;
    double firstBounceHeight;

    std::cout << "Enter number of bounces: ";
    std::cin >> numBounces;

    std::cout << numBounces << std::endl; 

    std::cout << "Enter starting height: ";
    int startingHeightTemp;
    std::cin >> startingHeightTemp;

    startingHeight = static_cast<double>(startingHeightTemp);

    std::cout << startingHeight << std::endl; 

    std::cout << "Enter first bounce height: ";
    int firstBounceHeightTemp;
    std::cin >> firstBounceHeightTemp;

    firstBounceHeight = static_cast<double>(firstBounceHeightTemp);

    double calculatedBouncinessIndex = (firstBounceHeight / startingHeight);

    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += (startingHeight * pow(calculatedBouncinessIndex, 2 * i));
    }

    std::cout << "Total distance traveled: " << totalDistance << std::endl;
    return 0;
}
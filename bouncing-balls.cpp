```cpp
#include <iostream>
#include <cmath>

int main() {
    int totalDistance = 0;
    int numBouncesTemp;
    double startingHeight;
    double firstBounceHeight;

    std::cout << "Enter number of bounces: ";
    int numBouncesTemp;
    std::cin >> numBouncesTemp;

    // Convert int to std::string
    std::string numBouncesStr = std::to_string(numBouncesTemp);

    std::cout << numBouncesStr << std::endl; 

    std::cout << "Enter starting height: ";
    int startingHeightTemp;
    std::cin >> startingHeightTemp;

    // Convert int to std::string
    std::string startingHeightStr = std::to_string(startingHeightTemp);

    std::cout << startingHeightStr << std::endl; 

    std::cout << "Enter first bounce height: ";
    int firstBounceHeightTemp;
    std::cin >> firstBounceHeightTemp;

    // Convert int to std::string
    std::string firstBounceHeightStr = std::to_string(firstBounceHeightTemp);

    std::cout << firstBounceHeightStr << std::endl; 

    double calculatedBouncinessIndex = (firstBounceHeight / startingHeight);

    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += (startingHeight * pow(calculatedBouncinessIndex, 2 * i));
    }

    std::cout << "Total distance traveled: " << totalDistance << std::endl;
    return 0;
}
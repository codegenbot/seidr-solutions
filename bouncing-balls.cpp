```cpp
#include <iostream>
#include <string>
#include <sstream>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * totalDistance;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::string startingHeightStr, firstBounceHeightStr, numBouncesStr;

    std::cout << "Enter the starting height: ";
    std::getline(std::cin, startingHeightStr);
    std::stringstream(startingHeightStr) >> startingHeight;

    std::cout << "Enter the height after the first bounce: ";
    std::getline(std::cin, firstBounceHeightStr);
    std::stringstream(firstBounceHeightStr) >> firstBounceHeight;

    std::cout << "Enter the number of bounces: ";
    std::getline(std::cin, numBouncesStr);
    std::stringstream(numBouncesStr) >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    std::cout << "Total distance traveled: " << totalDistance << std::endl;

    return 0;
}
```
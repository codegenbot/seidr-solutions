```cpp
#include <iostream>
#include <string>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight);

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * totalDistance;
    }

    return totalDistance;
}

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cout << "Enter the starting height: ";
    std::string startingHeightStr;
    std::getline(std::cin, startingHeightStr);
    startingHeight = std::stod(startingHeightStr);

    std::cout << "Enter the height after the first bounce: ";
    std::string firstBounceHeightStr;
    std::getline(std::cin, firstBounceHeightStr);
    firstBounceHeight = std::stod(firstBounceHeightStr);

    std::cout << "Enter the number of bounces: ";
    std::string numBouncesStr;
    std::getline(std::cin, numBouncesStr);
    numBounces = std::stoi(numBouncesStr);

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    std::cout << "Total distance traveled: " << totalDistance << std::endl;

    return 0;
}
```
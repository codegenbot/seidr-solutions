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
    std::string startingHeight, firstBounceHeight;
    int numBounces;

    std::cout << "Enter the starting height: ";
    std::getline(std::cin, startingHeight);
    double startingHeightDouble = std::stod(startingHeight);

    std::cout << "Enter the height after the first bounce: ";
    std::getline(std::cin, firstBounceHeight);
    double firstBounceHeightDouble = std::stod(firstBounceHeight);

    std::cout << "Enter the number of bounces: ";
    std::cin >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeightDouble, firstBounceHeightDouble, numBounces);
    std::cout << "Total distance traveled: " << totalDistance << std::endl;

    return 0;
}
```
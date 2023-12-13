```cpp
#include <iostream>

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
    std::string numBouncesStr;

    std::cout << "Enter the starting height: ";
    std::cin >> startingHeight;

    std::cout << "Enter the height after the first bounce: ";
    std::cin >> firstBounceHeight;

    std::cout << "Enter the number of bounces: ";
    std::cin >> numBouncesStr;
    int numBounces = std::stoi(numBouncesStr);

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    std::cout << "Total distance traveled: " << totalDistance << std::endl;

    return 0;
}
```
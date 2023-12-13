```cpp
#include <iostream>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance *= bouncinessIndex;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::cout << "Enter the starting height: ";
    std::cin >> startingHeight;

    std::cout << "Enter the height after the first bounce: ";
    std::cin >> firstBounceHeight;

    std::cout << "Enter the number of bounces: ";
    std::cin >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    std::cout << "Total distance traveled: " << totalDistance << std::endl;

    return 0;
}
```
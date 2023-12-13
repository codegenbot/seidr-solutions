```cpp
#include <iostream>
#include <ios>

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
    std::streamsize ss = std::cout.precision();
    
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

    std::cout.precision(ss);

    return 0;
}
```
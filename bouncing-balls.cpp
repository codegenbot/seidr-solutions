```cpp
#include <iostream>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight);

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * (totalDistance * bouncinessIndex);
    }
    return totalDistance;
}

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    std::cout << totalDistance;

    return 0;
}
```
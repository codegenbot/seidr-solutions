```cpp
#include <iostream>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return (firstBounceHeight / startingHeight) * (-1);
}

double calculateTotalDistance(double startingHeight, double firstBounceHeight, double numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        double nextBounceHeight = bouncinessIndex * totalDistance;
        totalDistance += nextBounceHeight;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    double numBounces;

    std::cin >> startingHeight >> firstBounceHeight >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);

    std::cout << totalDistance << std::endl;

    return 0;
}
```
```cpp
#include <iostream>

double calculateBouncinessIndex(double startingHeight, double bounceHeight) {
    return bounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double bounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, bounceHeight);
    double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        bounceHeight *= bouncinessIndex;
        totalDistance -= (2 * bounceHeight);
    }

    return totalDistance;
}

int main() {
    double startingHeight, bounceHeight;
    int numBounces;

    std::cin >> startingHeight >> bounceHeight >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeight, bounceHeight, numBounces);

    std::cout << totalDistance << std::endl;

    return 0;
}
```
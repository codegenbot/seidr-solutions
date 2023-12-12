```
#include <iostream>

double calculateBouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(double startingHeight, double bouncinessIndex, int numBounces) {
    double totalDistance = startingHeight;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += (2 * startingHeight * bouncinessIndex);
    }
    return totalDistance;
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;
    
    std::cin >> startingHeight >> heightAfterFirstBounce >> numBounces;
    
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, heightAfterFirstBounce);
    double totalDistance = calculateTotalDistance(startingHeight, bouncinessIndex, numBounces);
    
    std::cout << totalDistance << std::endl;
    
    return 0;
}
```
#include <iostream>

double calculateBouncinessIndex(double startHeight, double firstBounceHeight) {
    return firstBounceHeight / startHeight;
}

double calculateTotalDistance(double startHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startHeight, firstBounceHeight);
    double totalDistance = startHeight; // Distance from first drop
    double height = firstBounceHeight;
    
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += (2 * height); // Distance from bounce
        height *= bouncinessIndex; // Calculate height after bounce
    }
    
    return totalDistance;
}

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;
    
    std::cin >> startHeight >> firstBounceHeight >> numBounces;
    
    double totalDistance = calculateTotalDistance(startHeight, firstBounceHeight, numBounces);
    
    std::cout << totalDistance << std::endl;
    
    return 0;
}
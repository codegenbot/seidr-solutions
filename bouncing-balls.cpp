#include <iostream>

long double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

long double calculateTotalDistance(double startingHeight, double bouncinessIndex, int numBounces) {
    long double totalDistance = 0;
    double currentHeight = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += currentHeight;
        currentHeight *= bouncinessIndex;
        totalDistance += currentHeight;
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    long double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    long double totalDistance = calculateTotalDistance(startingHeight, bouncinessIndex, numBounces);
    
    std::cout << totalDistance << std::endl;
    
    return 0;
}
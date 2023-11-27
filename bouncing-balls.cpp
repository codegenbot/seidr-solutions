#include <iostream>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double bouncinessIndex, int numBounces) {
    double totalDistance = 0;
    double currentHeight = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += currentHeight * 2;
        currentHeight *= bouncinessIndex;
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = calculateTotalDistance(startingHeight, bouncinessIndex, numBounces);
    
    std::cout << totalDistance << std::endl;
    
    return 0;
}
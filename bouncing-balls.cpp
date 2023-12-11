#include <iostream>

double calculateBouncinessIndex(double startHeight, double firstBounceHeight) {
    return firstBounceHeight / startHeight;
}

double calculateTotalDistance(double startHeight, double bouncinessIndex, int numBounces) {
    double totalDistance = startHeight; // initial drop
    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * totalDistance;
    }
    return totalDistance;
}

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;
    
    std::cin >> startHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = calculateBouncinessIndex(startHeight, firstBounceHeight);
    double totalDistance = calculateTotalDistance(startHeight, bouncinessIndex, numBounces);
    
    std::cout << totalDistance;
    
    return 0;
}
#include <iostream>
#include <iomanip>

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += startingHeight + firstBounceHeight;
        startingHeight *= bouncinessIndex;
        firstBounceHeight *= bouncinessIndex;
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    
    std::cout << std::fixed << std::setprecision(15) << totalDistance << std::endl;
    
    return 0;
}
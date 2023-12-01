#include <iostream>

double calculateBouncinessIndex(double startingHeight, double bounceHeight) {
    return bounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double bounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, bounceHeight);
    double totalDistance = startingHeight;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += (2 * bounceHeight * bouncinessIndex);
        bounceHeight *= bouncinessIndex;
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
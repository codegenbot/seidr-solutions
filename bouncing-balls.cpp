#include <iostream>
#include <cmath>

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;
    
    for (int i = 0; i < numBounces - 1; i++) {
        totalDistance += 2 * bouncinessIndex * (startingHeight - totalDistance);
    }
    
    bouncinessIndex = sqrt(bouncinessIndex);
    
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double distance = calculateDistance(startingHeight, firstBounceHeight, numBounces);
    
    std::cout << distance << std::endl;
    
    return 0;
}
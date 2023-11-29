#include <iostream>
#include <cmath>
#include <iomanip>

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * (startingHeight - totalDistance);
        bouncinessIndex = sqrt(bouncinessIndex);
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double distance = calculateDistance(startingHeight, firstBounceHeight, numBounces);
    
    std::cout << std::fixed << std::setprecision(15) << distance << std::endl;
    
    return 0;
}
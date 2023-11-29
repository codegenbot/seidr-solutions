#include <iostream>
#include <cmath>

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;
    
    for (int i = 0; i < numBounces - 1; i++) {
        totalDistance += 2 * bouncinessIndex * (totalDistance / bouncinessIndex);
    }
    
    bouncinessIndex = sqrt(bouncinessIndex);
    
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    std::cout << "Enter starting height: ";
    std::cin >> startingHeight;
    
    std::cout << "Enter height after the first bounce: ";
    std::cin >> firstBounceHeight;
    
    std::cout << "Enter number of bounces: ";
    std::cin >> numBounces;
    
    double distance = calculateDistance(startingHeight, firstBounceHeight, numBounces);
    
    std::cout << "Total distance traveled: " << distance << std::endl;
    
    return 0;
}
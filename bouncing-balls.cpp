#include <iostream>

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight + firstBounceHeight;

    for (int i = 2; i <= numBounces; i++) {
        firstBounceHeight *= bouncinessIndex;
        bouncinessIndex = firstBounceHeight / startingHeight;
        totalDistance += 2 * firstBounceHeight;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    std::cout << "Enter the starting height: ";
    std::cin >> startingHeight;
    
    std::cout << "Enter the height after the first bounce: ";
    std::cin >> firstBounceHeight;
    
    std::cout << "Enter the number of bounces: ";
    std::cin >> numBounces;
    
    double distance = calculateDistance(startingHeight, firstBounceHeight, numBounces);
    
    std::cout << "Total distance traveled: " << distance << std::endl;
    
    return 0;
}
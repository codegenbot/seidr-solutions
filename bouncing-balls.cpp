#include <iostream>

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = static_cast<double>(firstBounceHeight) / startingHeight;
    double totalDistance = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * totalDistance;
        bouncinessIndex *= bouncinessIndex;
    }
    
    std::cout << totalDistance << std::endl;
    
    return 0;
}
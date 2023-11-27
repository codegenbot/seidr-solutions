#include <iostream>

int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex;
    int numBounces;
    
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    bouncinessIndex = firstBounceHeight / startingHeight;
    
    double totalDistance = startingHeight;
    double currentHeight = firstBounceHeight;
    
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += 2 * currentHeight;
        currentHeight *= bouncinessIndex;
    }
    
    std::cout << totalDistance << std::endl;
    
    return 0;
}
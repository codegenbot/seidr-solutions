#include <iostream>
#include <iomanip>

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;
    double bounceHeight = firstBounceHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += bounceHeight * 2;
        bounceHeight *= bouncinessIndex;
    }
    
    std::cout << std::fixed << std::setprecision(12) << totalDistance << std::endl;
    
    return 0;
}
#include <iostream>

int main() {
    double startHeight, firstBounceHeight, bouncinessIndex;
    int numBounces;
    
    std::cin >> startHeight >> firstBounceHeight >> numBounces;
    
    bouncinessIndex = firstBounceHeight / startHeight;
    
    double totalDistance = startHeight + firstBounceHeight;
    for (int i = 2; i <= numBounces; ++i) {
        totalDistance += 2 * firstBounceHeight * pow(bouncinessIndex, i - 1);
    }
    
    std::cout << totalDistance << std::endl;
    
    return 0;
}
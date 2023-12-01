#include <iostream>

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight + (firstBounceHeight * 2);
    
    for (int i = 2; i <= numBounces; i++) {
        totalDistance += firstBounceHeight * pow(bouncinessIndex, i);
    }
    
    std::cout << totalDistance << std::endl;
    
    return 0;
}
#include <cmath>
#include <iostream>

int main() {
    double startHeight, firstBounce;
    int numBounces;

    std::cin >> startHeight >> numBounces >> firstBounce; 

    double bouncinessIndex = firstBounce / startHeight;

    double newHeight = firstBounce;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        if(i > 1)
            startHeight *= std::sqrt(bouncinessIndex);
        else
            startHeight = firstBounce;
        totalDistance += std::abs(startHeight - newHeight); 
        newHeight = startHeight;
    }

    std::cout << std::fixed;
    std::cout << totalDistance << std::endl;

    return 0;
}
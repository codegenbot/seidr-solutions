#include <cmath>
#include <iostream>

int main() {
    double startHeight, firstBounce, bouncinessIndex;
    int numBounces;

    std::cout << "Enter the starting height: ";
    std::cin >> startHeight;

    std::cout << "Enter the height after the first bounce: ";
    std::cin >> firstBounce;

    std::cout << "Enter the number of bounces: ";
    std::cin >> numBounces;

    bouncinessIndex = (firstBounce / startHeight) * (1 - (abs(firstBounce) / abs(startHeight)));

    double totalDistance = 0;
    for (int i = 1; i <= numBounces; i++) {
        if(i > 1)
            startHeight = abs(startHeight * bouncinessIndex);
        else
            startHeight = firstBounce;
        
        if(startHeight < 0) startHeight = -startHeight;
        totalDistance += 2 * startHeight; 
    }

    std::cout << "The total distance traveled by the ball is: " << totalDistance << std::endl;

    return 0;
}
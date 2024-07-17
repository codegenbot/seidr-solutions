```cpp
#include <cmath>
#include <iostream>

int main() {
    double startHeight, firstBounce;
    int numBounces;

    std::cout << "Enter the starting height: ";
    std::cin >> startHeight;
    
    std::cout << "Enter the height after the first bounce: ";
    std::cin >> firstBounce;

    double bouncinessIndex = firstBounce / startHeight;

    std::cout << "Enter the number of bounces: ";
    std::cin >> numBounces;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += (pow(2, i/2) + pow(2, (i-1)/2)) * (bouncinessIndex - 1);
    }

    std::cout << "Total distance: " << totalDistance << std::endl;

    return 0;
}
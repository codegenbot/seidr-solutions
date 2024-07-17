```cpp
#include <iostream>
#include <cmath>

int main() {
    int totalDistance = 0;
    int numBounces;
    double startingHeight;
    double firstBounceHeight;

    std::cout << "Enter number of bounces: ";
    std::cin >> numBounces;

    std::cout << "Enter starting height: ";
    std::cin >> startingHeight;

    std::cout << "Enter first bounce height: ";
    std::cin >> firstBounceHeight;

    double calculatedBouncinessIndex = (firstBounceHeight / startingHeight);

    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += (startingHeight * pow(calculatedBouncinessIndex, 2 * i));
    }

    std::cout << "Total distance traveled: " << totalDistance << std::endl;
    return 0;
}
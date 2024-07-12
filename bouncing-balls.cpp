```c++
#include <cmath>
#include <iostream>

int main() {
    double bouncinessIndex;
    int numBounces;
    double startHeight;

    std::cout << "Enter the starting height: ";
    std::cin >> startHeight;
    
    std::cout << "Enter the height after the first bounce: ";
    std::cin >> bouncinessIndex;

    std::cout << "Enter the number of bounces: ";
    std::cin >> numBounces;

    double totalDistance = 0.0;
    for (int b = 0; b < numBounces; ++b) {
        double distance = pow(2, -b * bouncinessIndex) * startHeight;
        totalDistance += distance;
    }
    
    std::cout << "The total distance is: " << totalDistance << std::endl;

    return 0;
}
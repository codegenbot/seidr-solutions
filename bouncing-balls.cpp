#include <cmath>
#include <iostream>

int main() {
    double startHeight, firstBounce, numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;  

    double bouncinessIndex = (startHeight / firstBounce);

    double totalDistance = 1 - std::pow((1 - bouncinessIndex), numBounces);
    
    std::cout << std::fixed << std::setprecision(10) << totalDistance << std::endl;

    return 0;
}
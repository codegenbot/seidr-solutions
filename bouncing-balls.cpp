```cpp
#include <iostream>
#include <cmath> 
#include <iomanip> 
#include <sstream>

int main() { 
    std::string startHeightStr;
    std::cin >> startHeightStr;

    double startHeight = std::stod(startHeightStr);

    std::string firstBounceHeightStr;
    std::cin >> firstBounceHeightStr;

    double firstBounceHeight = std::stod(firstBounceHeightStr);

    double bouncinessIndex = firstBounceHeight / startHeight;

    int numBounces;
    std::cin >> numBounces;

    double totalDistance = 0.0;
    for(int i = 1; i <= numBounces; i++) {
        totalDistance += (2.0 * startHeight) * pow(bouncinessIndex, i);
    }

    std::cout << std::fixed << std::setprecision(5);
    std::cout << totalDistance << std::endl;

    return 0;
}
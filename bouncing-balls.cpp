```cpp
#include <iostream>
#include <cmath>

int main() {
    double startHeight;
    double firstBounce;
    double numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;  

    double bouncinessIndex = (startHeight / firstBounce);

    double totalDistance = 1 - pow((1 - bouncinessIndex), numBounces);
    
    std::cout << std::fixed << std::setprecision(10) << totalDistance << std::endl;

    return 0;
}
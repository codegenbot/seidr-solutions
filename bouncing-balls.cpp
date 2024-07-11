```cpp
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    std::cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bounciness = pow(heightAfterFirstBounce / startHeight, 0.5);
    
    // Calculate the total distance
    double totalDistance = 0;
    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += (startHeight + (heightAfterFirstBounce - startHeight) * pow(0.5, i));
    }

    std::cout << std::fixed << std::setiosflags(std::ios_base::floatfield::scientific) << std::setw(15) << bounciness << " " << totalDistance;
}
```cpp
#include <iostream>
#include <cmath>

int main() {
    double startHeight, heightAfterFirstBounce;
    std::cin >> startHeight >> ' ' >> heightAfterFirstBounce;
    double bouncinessIndex = pow(heightAfterFirstBounce / startHeight, 0.5);
    int numBounces;
    std::cin >> numBounces;
    double totalDistance = 0;
    for(int i=1; i<=numBounces; i++) {
        totalDistance += heightAfterFirstBounce * (2**i) * bouncinessIndex;
    }
    std::cout << totalDistance;
}
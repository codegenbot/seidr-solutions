```cpp
#include <cmath>

int main() {
    double startHeight, heightAfterFirstBounce;

    std::cin >> startHeight >> heightAfterFirstBounce;

    double bouncinessIndex = pow(heightAfterFirstBounce / startHeight, 0.5);

    int numBounces;
    std::cin >> numBounces;

    double totalDistance = startHeight * (1 + pow(0.5, 2)) * numBounces;

    return 0;
}
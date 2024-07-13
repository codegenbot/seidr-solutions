#include <iostream>
#include <cmath>
#include <cstddef>

int main() {
    double startHeight, actualStartHeight, actualBouncinessIndex;
    std::cin >> startHeight >> actualStartHeight;
    actualBouncinessIndex = (actualStartHeight / startHeight);

    double totalDistance = (pow(2, actualBouncinessIndex) - 1) * actualBouncinessIndex * startHeight;

    return 0;
}
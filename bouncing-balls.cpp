#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double startHeight, firstBounce;
    int numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounce / startHeight;

    // Calculate total distance traveled
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i);
    }

    std::cout << std::fixed << std::setprecision(5) << totalDistance << std::endl;

    return 0;
}
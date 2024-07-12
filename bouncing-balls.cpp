#include <iostream>
#include <cmath>

int main() {
    double startHeight;
    double firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    // Calculate bounciness index
    double bouncinessIndex = firstBounceHeight / startHeight;

    // Calculate total distance traveled
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(2, -std::log2(bouncinessIndex)) * startHeight;
    }

    std::cout << std::fixed << std::setprecision(6);
    std::cout << totalDistance;

    return 0;
}
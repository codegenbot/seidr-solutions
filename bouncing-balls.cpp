#include <iostream>
#include <cmath>

int main() {
    double startHeight;
    std::cin >> startHeight;

    double firstBounce;
    std::cin >> firstBounce;

    double bouncinessIndex = firstBounce / startHeight;

    int numBounces; 
    std::cin >> numBounces;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += abs(startHeight - firstBounce);
        startHeight *= bouncinessIndex; 
    }

    std::cout << std::fixed << std::setprecision(5) << totalDistance << "\n";
    return 0;
}
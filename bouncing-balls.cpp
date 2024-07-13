#include <cmath>
#include <iostream>

int main() {
    int startHeight, firstBounce;
    double numBounces;
    std::cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = (double)firstBounce / startHeight;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        double heightAfterBounce = startHeight * pow(bouncinessIndex, i);
        totalDistance += std::abs(heightAfterBounce - startHeight);
        startHeight = heightAfterBounce; 
    }
    totalDistance += std::abs(startHeight - startHeight); // add the last bounce
    std::cout << std::fixed << std::setprecision(5) << totalDistance << "\n";
    return 0;
}
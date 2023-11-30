#include <iostream>
#include <iomanip>

double calculateDistance(double startingHeight, double bounceHeight, int numBounces) {
    // Calculate the bounciness index
    double bouncinessIndex = bounceHeight / startingHeight;

    // Calculate the total distance traveled across the bounces
    double totalDistance = 0;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += startingHeight; // Distance traveled during the bounce up
        startingHeight *= bouncinessIndex; // Distance traveled during the bounce down
        totalDistance += startingHeight; // Distance traveled during the bounce down
    }

    return totalDistance;
}

int main() {
    double startingHeight, bounceHeight;
    int numBounces;
    std::cin >> startingHeight >> bounceHeight >> numBounces;

    double totalDistance = calculateDistance(startingHeight, bounceHeight, numBounces);
    std::cout << std::fixed << std::setprecision(15) << totalDistance << std::endl;

    return 0;
}
#include <iostream>
#include <iomanip>

double calculateBounceDistance(double startHeight, double bounceHeight, int numBounces) {
    double bouncinessIndex = bounceHeight / startHeight;
    double totalDistance = startHeight;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bounceHeight * bouncinessIndex;
        bounceHeight *= bouncinessIndex;
    }
    return totalDistance;
}

int main() {
    double startHeight, bounceHeight;
    int numBounces;
    std::cin >> startHeight >> bounceHeight >> numBounces;
    double distance = calculateBounceDistance(startHeight, bounceHeight, numBounces);
    std::cout << std::fixed << std::setprecision(15) << distance << std::endl;
    return 0;
}
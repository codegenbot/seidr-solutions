#include <iostream>
#include <iomanip>

int main() {
    double startingHeight, bounceHeight;
    int numBounces;
    std::cin >> startingHeight >> bounceHeight >> numBounces;

    double bouncinessIndex = bounceHeight / startingHeight;
    double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bounceHeight;
        bounceHeight *= bouncinessIndex;
    }

    std::cout << std::fixed << std::setprecision(15) << totalDistance << std::endl;

    return 0;
}
#include <iostream>

int main() {
    double startHeight, firstBounce, bounciness;
    int numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;

    // Calculate the bounciness index
    bounciness = (firstBounce / startHeight);

    // Calculate the total distance traveled
    double totalDistance = 2.0; // initial height is doubled after each bounce
    for(int i = 1; i <= numBounces; ++i) {
        totalDistance += bounciness * (2.0 * totalDistance); // height doubled after each bounce
    }

    std::cout << std::fixed << std::setprecision(5) << totalDistance;

    return 0;
}
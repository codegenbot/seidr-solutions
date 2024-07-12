```c++
#include <cmath>
#include <iostream>

int main() {
    int numBounces;
    double startHeight;

    std::cout << "Enter number of bounces: ";
    std::cin >> numBounces;

    std::cout << "Enter starting height: ";
    std::cin >> startHeight;

    double totalDistance = 0.0, bouncinessIndex; // Calculate bounciness index

    double firstBounce = startHeight / 2;
    bouncinessIndex = firstBounce / startHeight;

    for (int b = 0; b < numBounces; ++b) {
        double distance = pow(2, -b * bouncinessIndex) * startHeight;
        totalDistance += distance;
    }

    std::cout << "Total distance travelled: " << totalDistance << std::endl;

    return 0;
}
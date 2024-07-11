```c++
#include <iostream>
#include <cmath>

int main() {
    double startHeight;
    int numBounces;

    std::cout << "Enter starting height: ";
    std::cin >> startHeight;

    std::cout << "Enter number of bounces: ";
    std::cin >> numBounces;

    double bouncinessIndex = (startHeight / startHeight);  // Assuming the first bounce is at the same height

    double totalDistance = 0.0;
    for (int b = 0; b < numBounces; ++b) {
        double distance = pow(2, -b * bouncinessIndex) * startHeight;
        totalDistance += distance;
    }

    std::cout << "Total distance travelled: " << totalDistance;

    return 0;
}
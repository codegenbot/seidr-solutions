```cpp
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>

int main() {
    double startHeight, firstBounce, bouncinessIndex;
    int numBounces;

    std::cout << "Enter the starting height: ";
    std::cin >> startHeight;

    std::cout << "Enter the height after the first bounce: ";
    std::cin >> firstBounce;

    std::cout << "Enter the number of bounces: ";
    std::cin >> numBounces;

    bouncinessIndex = (2 * firstBounce) / (startHeight + firstBounce);
    double totalDistance = 0;

    double height = startHeight;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += abs(height - (height * bouncinessIndex));
        height *= bouncinessIndex;
    }

    std::ostringstream oss;
    oss << std::fixed << setprecision(6);
    oss << "The total distance traveled by the ball is: " << totalDistance << std::endl;
    std::cout << oss.str();

    return 0;
}
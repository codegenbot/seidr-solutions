```cpp
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 2.0 * (firstBounce + startHeight); // initial bounce
    for (int i = 1; i < numBounces; ++i) {
        totalDistance += 2.0 * startHeight; 
        startHeight *= bouncinessIndex; 
    }

    std::cout << "The total distance traveled by the ball is: " << totalDistance << std::endl;

    return 0;
}
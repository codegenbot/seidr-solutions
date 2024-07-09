```cpp
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

int main() {
    std::string startHeightStr, firstBounceStr;
    double numBounces;

    std::cin >> startHeightStr >> firstBounceStr >> numBounces;

    double startHeight = std::stod(startHeightStr);
    double firstBounce = std::stod(firstBounceStr);

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 2.0 * (firstBounce + startHeight); // initial bounce
    for (int i = 1; i < numBounces; ++i) {
        totalDistance += 2.0 * startHeight; 
        startHeight *= bouncinessIndex; 
    }

    std::cout << "The total distance traveled by the ball is: " << fixed << setprecision(0) << totalDistance << std::endl;

    return 0;
}
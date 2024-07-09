```cpp
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

int main() {
    std::string startHeightStr, firstBounceStr;
    int numBounces;

    std::cin >> startHeightStr >> firstBounceStr >> numBounces;

    double startHeight = stod(startHeightStr);
    double firstBounce = stod(firstBounceStr);

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 2.0 * (firstBounce + startHeight); // initial bounce
    for (int i = 1; i < numBounces; ++i) {
        totalDistance += 2.0 * startHeight; 
        startHeight *= bouncinessIndex; 
    }

    std::cout << "The total distance traveled by the ball is: " << static_cast<int>(totalDistance) << std::endl;

    return 0;
}
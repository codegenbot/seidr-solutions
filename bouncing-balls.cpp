```c++
#include <iostream>
#include <cmath>

int main() {
    std::string startHeightStr;
    std::cin >> startHeightStr;

    double startHeight = stod(startHeightStr);

    std::string firstBounceStr;
    std::cin >> firstBounceStr;

    double firstBounce = stod(firstBounceStr);

    double bouncinessIndex = firstBounce / startHeight;

    int numBounces; 
    std::cin >> numBounces;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += abs(startHeight - firstBounce);
        startHeight *= bouncinessIndex; 
    }

    std::cout << std::fixed << std::cout.precision(5) << totalDistance << "\n";
    return 0;
}
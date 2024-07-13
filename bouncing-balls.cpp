```cpp
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double startHeight;
    std::cin >> startHeight;

    double firstBounce;
    std::cin >> firstBounce;

    double bouncinessIndex = firstBounce / startHeight;

    int numBounces; 
    std::cin >> numBounces;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        startHeight *= bouncinessIndex; 
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
    }

    std::cout << std::fixed << std::setiosflags(std::ios_base::floatfield, std::ios_base::fixed) << totalDistance << "\n";
    return 0;
}
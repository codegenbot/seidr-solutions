```cpp
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int startHeight, firstBounce;
    std::cin >> startHeight >> firstBounce;

    double bouncinessIndex = (double)firstBounce / startHeight;

    int numBounces; 
    std::cin >> numBounces;

    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        startHeight *= bouncinessIndex; 
        totalDistance += pow(2, -bouncinessIndex) * startHeight;
    }

    std::cout << std::setprecision(2) << std::fixed << totalDistance << "\n";
    return 0;
}
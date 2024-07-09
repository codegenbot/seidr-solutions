#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int startHeight, firstBounce, numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;
    
    if (!(std::cin)) {
        return 1;
    }

    double bouncinessIndex = static_cast<double>(firstBounce) / static_cast<double>(startHeight);

    std::cout << std::fixed << std::setprecision(2) << bouncinessIndex << " ";
    for (int i = 1; i <= numBounces; ++i) {
        firstBounce *= 0.5;
        std::cout << std::fixed << std::setprecision(2) << static_cast<double>(firstBounce) << " ";
    }
    std::cout << std::fixed << std::setprecision(2) << startHeight + static_cast<double>(firstBounce) * (pow(2, numBounces) - 1) / 3.0;
    return 0;
}
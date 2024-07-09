#include <iostream>
#include <iomanip>

int main() {
    int startHeight, firstBounce, numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;
    
    if (!(std::cin)) {
        return 1;
    }

    double bouncinessIndex = static_cast<double>(firstBounce) / static_cast<double>(startHeight);

    std::cout << std::fixed << std::setprecision(2) << bouncinessIndex << " ";
    for (int i = 1; i <= numBounces; ++i) {
        startHeight = static_cast<double>(firstBounce);
        firstBounce *= 0.5;
        std::cout << startHeight << " ";
    }
    return 0;
}
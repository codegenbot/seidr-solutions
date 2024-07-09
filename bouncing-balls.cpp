#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int startHeight, firstBounce, numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;

    if (!(std::cin)) {
        return 1;
    }

    double bouncinessIndex = static_cast<double>(firstBounce) / startHeight;

    for (int i = 0; i <= numBounces; ++i) {
        int height = static_cast<int>(startHeight * pow(0.5, i));
        std::cout << std::to_string(height) << " ";
        startHeight = height;
    }
    return 0;
}
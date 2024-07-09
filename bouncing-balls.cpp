#include <iostream>

int main() {
    int startHeight, firstBounce, numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;
    
    if (!(std::cin)) {
        return 1;
    }

    double bouncinessIndex = static_cast<double>(firstBounce) / static_cast<double>(startHeight);

    std::cout << std::to_string(bouncinessIndex) << " ";
    for (int i = 1; i <= numBounces; ++i) {
        firstBounce *= 0.5;
        std::cout << std::to_string(firstBounce) + " ";
    }
    return 0;
}
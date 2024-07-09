```cpp
#include <iostream>

int main() {
    int startHeight, firstBounce, numBounces;

    std::cin >> startHeight >> firstBounce >> numBounces;
    
    if (!(std::cin)) {
        return 1;
    }

    double bouncinessIndex = static_cast<double>(firstBounce) / static_cast<double>(startHeight);

    std::cout << bouncinessIndex << " ";
    double height = startHeight;
    for (int i = 1; i <= numBounces; ++i) {
        height *= 0.5;
        std::cout << height << " ";
    }
    return 0;
}
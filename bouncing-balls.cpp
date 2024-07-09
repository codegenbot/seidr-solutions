```cpp
#include <iostream>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    int startHeight;
    double firstBounce;
    int numBounces;

    iss >> startHeight >> firstBounce >> numBounces;

    startHeight = static_cast<double>(startHeight);
    firstBounce = static_cast<double>(firstBounce);

    double bouncinessIndex = firstBounce / startHeight;

    std::cout << bouncinessIndex << " ";
    for (int i = 1; i <= numBounces; ++i) {
        firstBounce *= 0.5;
        std::cout << firstBounce << " ";
    }
    return 0;
}
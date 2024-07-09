```cpp
#include <iostream>
#include <sstream>

int main() {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);

    int startHeight;
    double firstBounce;
    int numBounces;

    if (!(iss >> startHeight >> firstBounce >> numBounces)) {
        // Handle invalid input (e.g., print error message and exit)
        return 1;
    }

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
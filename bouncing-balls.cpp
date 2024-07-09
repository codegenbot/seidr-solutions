```cpp
#include <iostream>
#include <sstream>

int main() {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);

    std::string str;
    iss >> str;
    double firstBounce = std::stod(str);
    int startHeight, numBounces;
    if (!(iss >> startHeight >> numBounces)) {
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
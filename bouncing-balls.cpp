```cpp
#include <iostream>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);
    int startHeight = std::stoi(input.substr(0, input.find(' ')));
    double firstBounce = std::stod(input.substr(input.find(' ') + 1, input.find('\n') - input.find(' ') - 1));
    int numBounces = std::stoi(input.substr(input.find('\n') + 1));

    startHeight = static_cast<double>(startHeight);
    firstBounce = static_cast<double>(firstBounce);

    double bouncinessIndex = firstBounce / startHeight;

    std::cout << std::to_string(startHeight) << " " << std::to_string(firstBounce) << "\n" << numBounces;
    return 0;
}
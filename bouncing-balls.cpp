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

    double totalDistance = (numBounces * 2) + 1; // calculate total distance based on numBounces

    std::stringstream ss;
    ss << startHeight << " " << firstBounce << "\n" << numBounces << " " << totalDistance;

    std::cout << ss.str();
    return 0;
}
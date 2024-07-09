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

    double totalDistance = 2.0 * (firstBounce + startHeight); // initial bounce
    for (int i = 1; i < numBounces; ++i) {
        totalDistance += 2.0 * startHeight; 
        startHeight *= bouncinessIndex; 
    }

    std::cout << "The total distance traveled by the ball is: " << static_cast<int>(totalDistance) << std::endl;

    return 0;
}
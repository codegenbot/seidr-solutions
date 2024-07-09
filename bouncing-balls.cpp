```cpp
#include <iostream>
#include <sstream>

int main() {
    int startHeight = 0;
    double firstBounce = 0.0;
    int numBounces = 0;

    std::string input;
    for (std::getline(std::cin, input); ; ) {
        if (input.empty()) break;
        if (startHeight == 0) {
            startHeight = std::stoi(input);
        } else if (firstBounce == 0.0) {
            firstBounce = std::stod(input);
        } else {
            numBounces = std::stoi(input);
            break;
        }
    }

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 2.0 * (firstBounce + startHeight); // initial bounce
    for (int i = 1; i < numBounces; ++i) {
        totalDistance += 2.0 * startHeight;
        startHeight *= bouncinessIndex;
    }

    std::cout << "The total distance traveled by the ball is: " << static_cast<int>(totalDistance) << std::endl;

    return 0;
}
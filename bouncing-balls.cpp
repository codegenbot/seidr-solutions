```cpp
#include <iostream>
#include <sstream>

int main() {
    double startHeight;
    double firstBounce;
    int numBounces;

    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    double tempStartHeight, tempFirstBounce, tempNumBounces;
    iss >> tempStartHeight >> tempFirstBounce >> tempNumBounces;
    startHeight = tempStartHeight;
    firstBounce = tempFirstBounce;
    numBounces = tempNumBounces;

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 2.0 * (firstBounce + startHeight); // initial bounce
    for (int i = 1; i < numBounces; ++i) {
        totalDistance += 2.0 * startHeight; 
        startHeight *= bouncinessIndex; 
    }

    std::cout << "The total distance traveled by the ball is: " << static_cast<int>(totalDistance) << std::endl;

    return 0;
}
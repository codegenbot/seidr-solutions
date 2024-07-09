```cpp
#include <iostream>
#include <sstream>

int main() {
    std::string startHeightStr;
    std::string firstBounceStr;
    std::string numBouncesStr;

    std::getline(std::cin, startHeightStr);
    std::getline(std::cin, firstBounceStr);
    std::getline(std::cin, numBouncesStr);

    double startHeight = stod(startHeightStr);
    double firstBounce = stod(firstBounceStr);
    int numBounces = stoi(numBouncesStr);

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 2.0 * (firstBounce + startHeight); // initial bounce
    for (int i = 1; i < numBounces; ++i) {
        totalDistance += 2.0 * startHeight; 
        startHeight *= bouncinessIndex; 
    }

    std::cout << "The total distance traveled by the ball is: " << static_cast<int>(totalDistance) << std::endl;

    return 0;
}
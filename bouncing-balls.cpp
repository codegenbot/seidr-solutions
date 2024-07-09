```cpp
#include <iostream>
#include <cmath>
#include <string>

int main() {
    double startHeight = std::stod(std::cin.getline(std::string(), 0));
    double firstBounce = std::stod(std::cin.getline(std::string(), 0));
    int numBounces = std::stoi(std::cin.getline(std::string(), 0));

    double bouncinessIndex = firstBounce / startHeight;

    double totalDistance = 2.0 * (firstBounce + startHeight); 
    for (int i = 1; i < numBounces; ++i) {
        totalDistance += 2.0 * startHeight; 
        startHeight *= bouncinessIndex; 
    }

    std::cout << fixed;
    std::cout << setprecision(10);
    std::cout << totalDistance << std::endl;

    return 0;
}
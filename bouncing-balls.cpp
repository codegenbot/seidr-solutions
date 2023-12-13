```cpp
#include <iostream>
#include <string>

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * totalDistance * bouncinessIndex;
    }
    
    return totalDistance;
}

int main() {
    std::string inputLine;
    std::getline(std::cin, inputLine);

    double startingHeight = std::stod(inputLine.substr(0, inputLine.find(' ')));
    inputLine = inputLine.substr(inputLine.find(' ') + 1);

    double firstBounceHeight = std::stod(inputLine.substr(0, inputLine.find(' ')));
    inputLine = inputLine.substr(inputLine.find(' ') + 1);

    int numBounces = std::stoi(inputLine);

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    
    std::cout << std::fixed;
    std::cout.precision(15);
    std::cout << totalDistance << std::endl;

    return 0;
}
```
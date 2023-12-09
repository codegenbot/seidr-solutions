```cpp
#include <iostream>
#include <string>
#include <cmath>

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;
    double height = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * height;
        height *= bouncinessIndex;
    }
    
    totalDistance += height;
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    std::string startingHeightStr, firstBounceHeightStr, numBouncesStr;
    std::cin >> startingHeightStr;
    std::cin >> firstBounceHeightStr;
    std::cin >> numBouncesStr;

    startingHeight = std::stod(startingHeightStr);
    firstBounceHeight = std::stod(firstBounceHeightStr);
    numBounces = std::stoi(numBouncesStr) - 1;

    double distance = calculateDistance(startingHeight, firstBounceHeight, numBounces);

    std::cout << distance << std::endl;

    return 0;
}
```
```cpp
#include <iostream>
#include <string>
#include <sstream>

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;
    double height = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += height;
        height *= bouncinessIndex;
        totalDistance += height;
    }
    
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    
    std::string startingHeightStr, firstBounceHeightStr, numBouncesStr;
    std::cin >> startingHeightStr;
    std::cin >> firstBounceHeightStr;
    std::cin >> numBouncesStr;
    
    std::stringstream startingHeightStream(startingHeightStr);
    std::stringstream firstBounceHeightStream(firstBounceHeightStr);
    std::stringstream numBouncesStream(numBouncesStr);
    
    startingHeightStream >> startingHeight;
    firstBounceHeightStream >> firstBounceHeight;
    numBouncesStream >> numBounces;
    
    double distance = calculateDistance(startingHeight, firstBounceHeight, numBounces);
    
    std::cout << distance << std::endl;
    
    return 0;
}
```
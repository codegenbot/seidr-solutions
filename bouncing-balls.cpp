```cpp
#include <iostream>
#include <string>

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
    std::string startingHeight, firstBounceHeight;
    int numBounces;
    
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    double distance = calculateDistance(std::stod(startingHeight), std::stod(firstBounceHeight), numBounces);
    
    std::cout << distance << std::endl;
    
    return 0;
}
```
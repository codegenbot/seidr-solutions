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
    double startingHeight, firstBounceHeight;
    int numBounces;
    std::string startingHeight_str, firstBounceHeight_str, numBounces_str;
    std::cin >> startingHeight_str >> firstBounceHeight_str >> numBounces_str;
    startingHeight = std::stod(startingHeight_str);
    firstBounceHeight = std::stod(firstBounceHeight_str);
    numBounces = std::stoi(numBounces_str);
    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);
    std::cout << std::fixed;
    std::cout.precision(15);
    std::cout << totalDistance << std::endl;
    return 0;
}
```
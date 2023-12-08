```cpp
#include <iostream>

long double calculateDistance(long double startingHeight, long double firstBounceHeight, int numBounces) {
    long double bouncinessIndex = firstBounceHeight / startingHeight;
    long double totalDistance = 0;
    long double height = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += height;
        height *= bouncinessIndex;
        totalDistance += height;
    }
    
    return totalDistance;
}

int main() {
    long double startingHeight, firstBounceHeight;
    int numBounces;
    
    std::cin >> startingHeight >> firstBounceHeight >> numBounces;
    
    long double distance = calculateDistance(startingHeight, firstBounceHeight, numBounces);
    
    std::cout << distance << std::endl;
    
    return 0;
}
```
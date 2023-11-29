#include <iostream>
#include <cmath>

long double calculateDistance(long double startingHeight, long double firstBounceHeight, int numBounces) {
    long double bouncinessIndex = firstBounceHeight / startingHeight;
    long double totalDistance = startingHeight;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * (totalDistance - startingHeight);
        bouncinessIndex = sqrt(bouncinessIndex);
    }
    
    return totalDistance;
}
```
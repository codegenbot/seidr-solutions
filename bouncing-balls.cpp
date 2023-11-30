#include <iostream>
#include <iomanip>
using namespace std;

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;
    
    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * startingHeight;
        startingHeight *= bouncinessIndex;
        firstBounceHeight *= bouncinessIndex;
    }
    
    return totalDistance;
}
```
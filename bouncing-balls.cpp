```
#include <iostream>
using namespace std;

double bouncingBalls(double startingHeight, double firstBounceHeight, int numBounces) {
    double totalDistance = 0;
    for (int i = 1; i <= numBounces; i++) {
        double distance = (startingHeight - firstBounceHeight) * pow(bouncinessIndex, i);
        totalDistance += distance;
    }
    return totalDistance;
}
```
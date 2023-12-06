
Sure! Here's the modified code:
```
#include <iostream>
#include <cmath>
using namespace std;

double bouncingBall(double startingHeight, double heightAfterFirstBounce, int numBounces) {
    double bouncinessIndex = heightAfterFirstBounce / startingHeight;
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += (startingHeight + (i - 1) * bouncinessIndex);
    }
    return totalDistance;
}
```
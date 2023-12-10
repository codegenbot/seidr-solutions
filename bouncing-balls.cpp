```
#include <iostream>
#include <cmath>
using namespace std;

double bouncingBalls(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0.0;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += (startingHeight + (i * bouncinessIndex));
    }
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    cout << bouncingBalls(startingHeight, firstBounceHeight, numBounces) << endl;
    return 0;
}
```
Note: The formula for calculating the total distance traveled by the ball is now:
```
totalDistance = startingHeight + (bouncinessIndex * (numBounces - 1)) + (firstBounceHeight / 2)
```
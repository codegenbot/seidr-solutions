```cpp
#include <iostream>
using namespace std;

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;
    float currentHeight = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += currentHeight;
        currentHeight *= bouncinessIndex;
        totalDistance += currentHeight;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);

    cout << totalDistance << endl;

    return 0;
}
```
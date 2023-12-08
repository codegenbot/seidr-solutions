```cpp
#include <iostream>
using namespace std;

long double calculateDistance(long double startingHeight, long double bouncinessIndex, int numBounces) {
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

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    long double bouncinessIndex = firstBounceHeight / startingHeight;
    long double distance = calculateDistance(startingHeight, bouncinessIndex, numBounces);

    cout << distance;

    return 0;
}
```
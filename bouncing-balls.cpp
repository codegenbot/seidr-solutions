```cpp
#include <iostream>
#include <iomanip>

using namespace std;

double calculateBouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(double startingHeight, double bouncinessIndex, int numBounces) {
    double totalDistance = 0;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += startingHeight;
        startingHeight *= bouncinessIndex;
        totalDistance += startingHeight;
    }
    return totalDistance;
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;
    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startingHeight, heightAfterFirstBounce);
    double totalDistance = calculateTotalDistance(startingHeight, bouncinessIndex, numBounces);

    cout << fixed << setprecision(14) << totalDistance << endl;

    return 0;
}
```
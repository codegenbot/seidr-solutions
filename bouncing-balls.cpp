```cpp
#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double startingHeight, double bouncinessIndex, int numBounces) {
    double totalDistance = startingHeight;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += bouncinessIndex * totalDistance;
    }
    return totalDistance;
}

int main() {
    string startingHeightStr, firstBounceHeightStr;
    int numBounces;

    cin >> startingHeightStr >> firstBounceHeightStr >> numBounces;
    
    double startingHeight = stod(startingHeightStr);
    double firstBounceHeight = stod(firstBounceHeightStr);

    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = calculateTotalDistance(startingHeight, bouncinessIndex, numBounces);

    cout << totalDistance << endl;

    return 0;
}
```
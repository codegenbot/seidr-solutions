```
#include <iostream>
#include <iomanip>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistanceTravelled(int numBounces, double bouncinessIndex) {
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += bouncinessIndex * (i + 1);
    }
    return totalDistance;
}

int main() {
    double startingHeight, heightAfterFirstBounce, bouncinessIndex, totalDistanceTravelled;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;
    bouncinessIndex = calculateBouncinessIndex(startingHeight, heightAfterFirstBounce);
    totalDistanceTravelled = calculateTotalDistanceTravelled(numBounces, bouncinessIndex);

    cout << fixed << setprecision(10) << totalDistanceTravelled << endl;

    return 0;
}
```
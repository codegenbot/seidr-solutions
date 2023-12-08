```
#include <iostream>
using namespace std;
#include <iomanip>

double calculateBouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistanceTravelled(int numBounces, double bouncinessIndex, double airResistanceCoefficient) {
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += (1 - 0.5 * airResistanceCoefficient * airResistanceCoefficient) * (bouncinessIndex * (i + 1));
    }
    return totalDistance;
}

int main() {
    double startingHeight, heightAfterFirstBounce, bouncinessIndex, airResistanceCoefficient, totalDistanceTravelled;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces >> airResistanceCoefficient;
    bouncinessIndex = calculateBouncinessIndex(startingHeight, heightAfterFirstBounce);
    totalDistanceTravelled = calculateTotalDistanceTravelled(numBounces, bouncinessIndex, airResistanceCoefficient);

    cout << fixed << setprecision(10) << totalDistanceTravelled << endl;

    return 0;
}
```
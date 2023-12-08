```
#include <iostream>
using namespace std;
#include <iomanip>

double calculateBouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistanceTravelled(int numBounces, double bouncinessIndex) {
    return (bouncinessIndex * (numBounces + 1)) / 2;
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
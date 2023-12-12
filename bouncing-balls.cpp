#include <iostream>
using namespace std;
int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex, totalDistance;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    bouncinessIndex = firstBounceHeight / startingHeight;
    totalDistance = 0;
    for (int i = 1; i <= numBounces; i++) {
        double distanceTraveledDuringBounce = startingHeight + (i - 1) * bouncinessIndex;
        totalDistance += distanceTraveledDuringBounce;
    }
    cout << totalDistance << endl;
    return 0;
}
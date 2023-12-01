#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex, totalDistance;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    bouncinessIndex = firstBounceHeight / startingHeight;
    totalDistance = firstBounceHeight;

    for (int i = 1; i < numBounces; i++) {
        totalDistance += 2 * startingHeight;
        startingHeight *= bouncinessIndex;
    }

    cout << totalDistance << endl;

    return 0;
}
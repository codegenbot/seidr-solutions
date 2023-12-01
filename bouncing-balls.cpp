#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounce, bouncinessIndex, totalDistance;
    int numBounces;

    cin >> startingHeight >> firstBounce >> numBounces;

    bouncinessIndex = firstBounce / startingHeight;
    totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * (bouncinessIndex * totalDistance);
    }

    cout << totalDistance << endl;

    return 0;
}
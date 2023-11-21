#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * (bouncinessIndex * totalDistance);
        bouncinessIndex *= bouncinessIndex;
    }

    cout.precision(17);
    cout << totalDistance << endl;

    return 0;
}
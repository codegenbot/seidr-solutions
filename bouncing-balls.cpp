#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight, bouncinessIndex, totalDistance;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    bouncinessIndex = firstBounceHeight / startingHeight;

    totalDistance = 2.0 * (1 + bouncinessIndex) * numBounces * startingHeight;

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += (bouncinessIndex * startingHeight);
        bouncinessIndex *= bouncinessIndex;
    }

    cout.precision(17);
    cout << totalDistance << endl;

    return 0;
}
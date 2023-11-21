#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = firstBounceHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * (bouncinessIndex * totalDistance);
    }

    cout << totalDistance << endl;

    return 0;
}
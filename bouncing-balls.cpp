#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight;

    for (int i = 1; i < numBounces; i++) {
        totalDistance += 2 * (startingHeight * bouncinessIndex);
        startingHeight *= bouncinessIndex;
    }

    cout << totalDistance << endl;

    return 0;
}
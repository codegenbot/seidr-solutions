#include <iostream>
using namespace std;

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = firstBounceHeight / startingHeight;
    double bouncinessIndexInitial = bouncinessIndex;
    double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        bouncinessIndex *= bouncinessIndex / bouncinessIndexInitial;
        totalDistance += 2 * bouncinessIndex;
    }

    cout << totalDistance << endl;

    return 0;
}
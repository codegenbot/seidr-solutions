#include <iostream>
using namespace std;

int main() {
    float startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    float bouncinessIndex = firstBounceHeight / startingHeight;
    float totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * totalDistance;
        bouncinessIndex *= bouncinessIndex;
    }

    cout << totalDistance << endl;

    return 0;
}
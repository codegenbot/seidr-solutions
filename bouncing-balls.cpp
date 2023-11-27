#include <iostream>
using namespace std;

int main() {
    long double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    long double bouncinessIndex = firstBounceHeight / startingHeight;
    long double totalDistance = startingHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * totalDistance;
    }

    cout << totalDistance << endl;

    return 0;
}
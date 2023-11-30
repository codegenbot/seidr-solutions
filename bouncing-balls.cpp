#include <iostream>
using namespace std;

double calculateDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight + firstBounceHeight;

    for (int i = 1; i < numBounces; i++) {
        totalDistance += 2 * (bouncinessIndex * startingHeight);
        bouncinessIndex *= bouncinessIndex;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;
    cout << calculateDistance(startingHeight, firstBounceHeight, numBounces) << endl;

    return 0;
}
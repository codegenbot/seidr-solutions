#include <iostream>
using namespace std;

double calculateTotalDistance(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = startingHeight + firstBounceHeight;

    for (int i = 1; i < numBounces; i++) {
        totalDistance += 2 * firstBounceHeight * bouncinessIndex;
        firstBounceHeight *= bouncinessIndex;
    }

    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double totalDistance = calculateTotalDistance(startingHeight, firstBounceHeight, numBounces);

    cout << totalDistance << endl;

    return 0;
}
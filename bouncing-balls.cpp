#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startHeight, double firstBounceHeight) {
    return firstBounceHeight / startHeight;
}

double calculateTotalDistance(double startHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = calculateBouncinessIndex(startHeight, firstBounceHeight);
    double totalDistance = startHeight;

    for (int i = 0; i < numBounces; i++) {
        totalDistance += 2 * bouncinessIndex * totalDistance;
    }

    return totalDistance;
}

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double totalDistance = calculateTotalDistance(startHeight, firstBounceHeight, numBounces);

    cout << totalDistance << endl;

    return 0;
}
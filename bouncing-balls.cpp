#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startHeight, double firstBounceHeight) {
    return firstBounceHeight / startHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numBounces) {
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i);
    }
    return totalDistance;
}

int main() {
    double startHeight, firstBounceHeight;
    int numBounces;

    cin >> startHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startHeight, firstBounceHeight);

    double totalDistance = calculateTotalDistance(bouncinessIndex, numBounces);

    cout.precision(6);
    cout << fixed << totalDistance << endl;

    return 0;
}
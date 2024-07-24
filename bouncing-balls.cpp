#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(int numBounces, double bouncinessIndex) {
    return (1 - pow(bouncinessIndex, 2)) * (2.0 + numBounces) / (1 - bouncinessIndex);
}

int main() {
    int numBounces;
    double startingHeight, firstBounceHeight;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);

    double totalDistance = calculateTotalDistance(numBounces, bouncinessIndex);

    cout << fixed << setprecision(4) << totalDistance << endl;

    return 0;
}
#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numBounces) {
    return (1 - pow(bouncinessIndex, -numBounces)) * 2;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;

    cin >> startingHeight >> firstBounceHeight >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = calculateTotalDistance(bouncinessIndex, numBounces);

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}
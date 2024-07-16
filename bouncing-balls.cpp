#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double firstBounceHeight) {
    return firstBounceHeight / startingHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numberOfBounces) {
    return (1 - pow(bouncinessIndex, -numberOfBounces)) * 2;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numberOfBounces;

    cin >> startingHeight >> firstBounceHeight >> numberOfBounces;

    double bouncinessIndex = calculateBouncinessIndex(startingHeight, firstBounceHeight);
    double totalDistance = calculateTotalDistance(bouncinessIndex, numberOfBounces);

    cout << fixed << setprecision(4) << totalDistance << endl;

    return 0;
}
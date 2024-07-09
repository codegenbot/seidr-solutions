#include <iostream>
using namespace std;

double calculateBouncinessIndex(double heightAfterFirstBounce, double startingHeight) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numberOfBounces) {
    double totalDistance = 0.0;
    for (int i = 1; i <= numberOfBounces; ++i) {
        totalDistance += pow(bouncinessIndex, i);
    }
    return totalDistance;
}

int main() {
    double heightAfterFirstBounce, startingHeight;
    int numberOfBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numberOfBounces;

    double bouncinessIndex = calculateBouncinessIndex(heightAfterFirstBounce, startingHeight);
    double totalDistance = calculateTotalDistance(bouncinessIndex, numberOfBounces);

    cout << fixed << setprecision(4) << totalDistance << endl;

    return 0;
}
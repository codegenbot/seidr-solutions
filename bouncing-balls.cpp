#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
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
    double startingHeight, heightAfterFirstBounce, bouncinessIndex;
    int numberOfBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numberOfBounces;

    bouncinessIndex = calculateBouncinessIndex(startingHeight, heightAfterFirstBounce);

    cout << fixed << setprecision(6) << bouncinessIndex << endl;

    double totalDistance = calculateTotalDistance(bouncinessIndex, numberOfBounces);
    cout << fixed << setprecision(6) << totalDistance << endl;

    return 0;
}
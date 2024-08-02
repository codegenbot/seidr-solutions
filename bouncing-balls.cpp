#include <iostream>
using namespace std;

double calculateBouncinessIndex(double heightAfterFirstBounce, double startingHeight) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(int numberOfBounces, double bouncinessIndex) {
    double totalDistance = 0.0;
    for (int i = 1; i <= numberOfBounces; i++) {
        totalDistance += (1 - pow(bouncinessIndex, i)) / (1 - bouncinessIndex);
    }
    return totalDistance;
}

int main() {
    double heightAfterFirstBounce;
    int numberOfBounces;

    cin >> heightAfterFirstBounce >> numberOfBounces;

    double startingHeight = 1.0; // assuming the starting height is always 1.0

    double bouncinessIndex = calculateBouncinessIndex(heightAfterFirstBounce, startingHeight);

    double totalDistance = calculateTotalDistance(numberOfBounces, bouncinessIndex);

    cout.precision(5);
    cout << fixed << totalDistance;

    return 0;
}
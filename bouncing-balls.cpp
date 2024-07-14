#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(int numberOfBounces, double bouncinessIndex) {
    return (1 - pow(bouncinessIndex, 2)) * (1 - pow(bouncinessIndex, 2)) * (numberOfBounces + 1);
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numberOfBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numberOfBounces;

    double bouncinessIndex = calculateBouncinessIndex(startingHeight, heightAfterFirstBounce);

    double totalDistance = calculateTotalDistance(numberOfBounces, bouncinessIndex);

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}
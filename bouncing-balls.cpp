#include <iostream>
using namespace std;

double calculateBouncinessIndex(double heightAfterFirstBounce, double startingHeight) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numberOfBounces) {
    return (1 - pow(bouncinessIndex, 2)) * (1 - pow(bouncinessIndex, 2)) * (1 - pow(bouncinessIndex, 2)) * (numberOfBounces * 4);
}

int main() {
    double heightAfterFirstBounce;
    int numberOfBounces;

    cin >> heightAfterFirstBounce >> startingHeight >> numberOfBounces;

    double bouncinessIndex = calculateBouncinessIndex(heightAfterFirstBounce, startingHeight);

    double totalDistance = calculateTotalDistance(bouncinessIndex, numberOfBounces);

    cout << fixed << setprecision(6);
    cout << totalDistance << endl;

    return 0;
}
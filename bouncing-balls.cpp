#include <iostream>
using namespace std;

double calculateBouncinessIndex(double heightAfterFirstBounce, double startingHeight) {
    return (heightAfterFirstBounce / startingHeight);
}

double calculateTotalDistance(double bouncinessIndex, int numberOfBounces) {
    return ((1 - bouncinessIndex) * (1 - pow(bouncinessIndex, numberOfBounces))) / (1 - bouncinessIndex);
}

int main() {
    double heightAfterFirstBounce, startingHeight;
    int numberOfBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numberOfBounces;

    double bouncinessIndex = calculateBouncinessIndex(heightAfterFirstBounce, startingHeight);

    double totalDistance = calculateTotalDistance(bouncinessIndex, numberOfBounces);

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}
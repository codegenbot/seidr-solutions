#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numberOfBounces) {
    return bouncinessIndex * (1 + bouncinessIndex) * (1 - pow(bouncinessIndex, numberOfBounces));
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numberOfBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numberOfBounces;

    double bouncinessIndex = calculateBouncinessIndex(startingHeight, heightAfterFirstBounce);
    double totalDistance = calculateTotalDistance(bouncinessIndex, numberOfBounces);

    cout.setprecision(6); // to display 6 decimal places
    cout << fixed;
    cout << totalDistance << endl;

    return 0;
}
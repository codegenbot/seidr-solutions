```
#include <iostream>
#include <cmath>
#include <iomanip>

double calculateBouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numberOfBounces) {
    return 2.0 * (1 - pow(bouncinessIndex, -numberOfBounces)) / (1 - bouncinessIndex);
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numberOfBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numberOfBounces;

    double bouncinessIndex = calculateBouncinessIndex(startingHeight, heightAfterFirstBounce);

    cout << fixed << setprecision(5);
    cout << bouncinessIndex << endl;
    cout << fixed << setprecision(5);
    cout << calculateTotalDistance(bouncinessIndex, numberOfBounces) << endl;

    return 0;
}
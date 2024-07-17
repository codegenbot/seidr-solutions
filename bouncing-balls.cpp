#include <iostream>
using namespace std;

double calculateBouncinessIndex(double heightAfterFirstBounce, double startingHeight) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(int numBounces, double bouncinessIndex) {
    return (1 - pow(bouncinessIndex, 2)) * (1 + bouncinessIndex) * (1 - bouncinessIndex) * (numBounces * 4);
}

int main() {
    double heightAfterFirstBounce;
    int numBounces;

    cin >> heightAfterFirstBounce >> numBounces;

    double startingHeight = 100.0; // Assuming the default starting height is 100.0
    double bouncinessIndex = calculateBouncinessIndex(heightAfterFirstBounce, startingHeight);

    double totalDistance = calculateTotalDistance(numBounces, bouncinessIndex);

    cout.setprecision(6);
    cout << fixed << totalDistance << endl;

    return 0;
}
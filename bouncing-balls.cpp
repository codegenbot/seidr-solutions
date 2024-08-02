#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(int numBounces, double bouncinessIndex) {
    return (1 - pow(bouncinessIndex, numBounces)) * 2.0;
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startingHeight, heightAfterFirstBounce);
    double totalDistance = calculateTotalDistance(numBounces, bouncinessIndex);

    cout << fixed << setprecision(4) << totalDistance << endl;

    return 0;
}
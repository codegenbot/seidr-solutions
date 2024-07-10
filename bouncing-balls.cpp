#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(int numBounces, double bouncinessIndex) {
    return 2.0 * (1 - pow(bouncinessIndex, numBounces)) / (1 - bouncinessIndex);
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startingHeight, heightAfterFirstBounce);

    double totalDistance = calculateTotalDistance(numBounces, bouncinessIndex);

    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}
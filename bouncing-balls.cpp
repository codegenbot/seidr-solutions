#include <iostream>
using namespace std;

#include <cmath>
#include <iomanip>

double calculateBouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numBounces) {
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; ++i) {
        totalDistance += pow(bouncinessIndex, i);
    }
    return totalDistance;
}

int main() {
    double startingHeight, heightAfterFirstBounce, bouncinessIndex;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    bouncinessIndex = calculateBouncinessIndex(startingHeight, heightAfterFirstBounce);

    cout << fixed << setprecision(6);
    cout << bouncinessIndex << endl;
    cout << fixed << setprecision(10);
    cout << calculateTotalDistance(bouncinessIndex, numBounces) << endl;

    return 0;
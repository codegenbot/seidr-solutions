#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(int numBounces, double bouncinessIndex) {
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i);
    }
    return totalDistance;
}

int main() {
    double startingHeight, heightAfterFirstBounce, bouncinessIndex;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    bouncinessIndex = calculateBouncinessIndex(startingHeight, heightAfterFirstBounce);

    cout << fixed << setprecision(4);
    cout << calculateTotalDistance(numBounces, bouncinessIndex) << endl;

    return 0;
}
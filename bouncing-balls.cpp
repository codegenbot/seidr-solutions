#include <iostream>
using namespace std;

double calculateBouncinessIndex(double startHeight, double heightAfterFirstBounce) {
    return heightAfterFirstBounce / startHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numBounces) {
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += pow(bouncinessIndex, i);
    }
    return totalDistance;
}

int main() {
    double startHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startHeight >> heightAfterFirstBounce >> numBounces;

    double bouncinessIndex = calculateBouncinessIndex(startHeight, heightAfterFirstBounce);
    double totalDistance = calculateTotalDistance(bouncinessIndex, numBounces);

    cout << fixed << setprecision(5) << totalDistance << endl;

    return 0;
}
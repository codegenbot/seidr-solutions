#include <iostream>
using namespace std;

double calculateBouncinessIndex(double heightAfterFirstBounce, double startingHeight) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numberOfBounces) {
    return (1 - pow(bouncinessIndex, (-2.0))) * 2.0 * (1.0 + bouncinessIndex) * numberOfBounces;
}

int main() {
    double heightAfterFirstBounce, startingHeight;
    int numberOfBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numberOfBounces;

    double bouncinessIndex = calculateBouncinessIndex(heightAfterFirstBounce, startingHeight);
    double totalDistance = calculateTotalDistance(bouncinessIndex, numberOfBounces);

    cout << fixed << setprecision(6) << totalDistance << endl;

    return 0;
}
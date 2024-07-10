#include <iostream>
using namespace std;

double calculateBounciness(double heightAfterFirstBounce, double startingHeight) {
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
    double heightAfterFirstBounce;
    int numBounces;

    cin >> heightAfterFirstBounce >> numBounces;

    double startingHeight = 1.0; // assuming the starting height is always 1.0
    double bouncinessIndex = calculateBounciness(heightAfterFirstBounce, startingHeight);

    cout << fixed << setprecision(5);
    cout << bouncinessIndex << endl;
    cout << fixed << setprecision(10);
    cout << calculateTotalDistance(bouncinessIndex, numBounces) << endl;

    return 0;
}
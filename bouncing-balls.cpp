#include <iostream>
using namespace std;

double calculateBouncinessIndex(double heightAfterFirstBounce, double startingHeight) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numberOfBounces) {
    double totalDistance = 0.0;
    for (int i = 1; i <= numberOfBounces; ++i) {
        totalDistance += pow(bouncinessIndex, i);
    }
    return totalDistance;
}

int main() {
    double heightAfterFirstBounce;
    int numberOfBounces;

    // read input from user
    cin >> heightAfterFirstBounce >> numberOfBounces;

    // calculate bounciness index
    double bouncinessIndex = calculateBouncinessIndex(heightAfterFirstBounce, 1.0);

    // calculate total distance
    double totalDistance = calculateTotalDistance(bouncinessIndex, numberOfBounces);

    // print output
    cout << fixed << setprecision(5);
    cout << totalDistance << endl;

    return 0;
}
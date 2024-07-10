#include <iostream>
using namespace std;

double calculateBouncinessIndex(double heightAfterFirstBounce, double startingHeight) {
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
    double heightAfterFirstBounce;
    int numBounces;

    cin >> heightAfterFirstBounce >> numBounces;

    double startingHeight = 1.0; // assuming this as per problem description

    double bouncinessIndex = calculateBouncinessIndex(heightAfterFirstBounce, startingHeight);

    double totalDistance = calculateTotalDistance(numBounces, bouncinessIndex);

    cout << fixed << setprecision(4);
    cout << totalDistance << endl;

    return 0;
}
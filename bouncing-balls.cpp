#include <iostream>
using namespace std;
#include <iomanip>

double calculateBouncinessIndex(double startingHeight, double heightAfterFirstBounce) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistanceTravelled(int numBounces, double bouncinessIndex, double airResistanceCoefficient) {
    double totalDistance = 0.0;
    for (int i = 1; i <= numBounces; i++) {
        totalDistance += (1 - 0.5*airResistanceCoefficient^2) * (bouncinessIndex^(i+1));
    }
    return totalDistance;
}

int main() {
    double startingHeight, heightAfterFirstBounce, bouncinessIndex, totalDistanceTravelled;
    int numBounces;
    double airResistanceCoefficient = 0.5; // Assuming a constant air resistance coefficient of 0.5 for simplicity

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;
    bouncinessIndex = calculateBouncinessIndex(startingHeight, heightAfterFirstBounce);
    totalDistanceTravelled = calculateTotalDistanceTravelled(numBounces, bouncinessIndex, airResistanceCoefficient);

    cout << fixed << setprecision(10) << totalDistanceTravelled << endl;

    return 0;
}
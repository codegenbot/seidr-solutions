#include <iostream>
using namespace std;

double calculateBounciness(double heightAfterFirstBounce, double startingHeight) {
    return heightAfterFirstBounce / startingHeight;
}

double calculateTotalDistance(double bouncinessIndex, int numBounces) {
    return 2.0 * (1 - pow(bouncinessIndex, -numBounces));
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    double bounciness = calculateBounciness(heightAfterFirstBounce, startingHeight);
    double totalDistance = calculateTotalDistance(bounciness, numBounces);

    cout.precision(6);  // Set the precision for output
    cout << fixed << totalDistance << endl;
    
    return 0;
}
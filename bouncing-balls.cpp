#include <iostream>
using namespace std;

double bouncingIndex(double heightAfterFirstBounce, double startingHeight) {
    return heightAfterFirstBounce / startingHeight;
}

double totalDistance(double bouncinessIndex, int numBounces) {
    return 2.0 * (1 - pow(bouncinessIndex, -numBounces)) / (1 - bouncinessIndex);
}

int main() {
    double heightAfterFirstBounce, startingHeight;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    double bounciness = bouncingIndex(heightAfterFirstBounce, startingHeight);

    double totalDist = totalDistance(bounciness, numBounces);

    cout.precision(5);
    cout << fixed << totalDist << endl;

    return 0;
}
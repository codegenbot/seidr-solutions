#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

double bouncingBalls(double startingHeight, double heightAfterFirstBounce, int numBounces) {
    double bouncinessIndex = heightAfterFirstBounce / startingHeight;
    double totalDistance = 0;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += (startingHeight + (bouncinessIndex * (i + 1)));
    }
    return totalDistance;
}
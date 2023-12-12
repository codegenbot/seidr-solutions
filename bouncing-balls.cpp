#include <iostream>
#include <cmath>
using namespace std;

double bouncingBalls(double startingHeight, double heightAfterFirstBounce, int numBounces) {
    double bouncinessIndex = heightAfterFirstBounce / startingHeight;
    double totalDistance = 0.0;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += startingHeight * pow(bouncinessIndex, i);
    }
    return totalDistance;
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;
    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;
    cout << bouncingBalls(startingHeight, heightAfterFirstBounce, numBounces) << endl;
    return 0;
}
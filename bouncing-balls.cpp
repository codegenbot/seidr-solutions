#include <iostream>
using namespace std;

double bouncingBalls(double startingHeight, double firstBounceHeight, int numBounces) {
    double bouncinessIndex = firstBounceHeight / startingHeight;
    double totalDistance = 0.0;
    for (int i = 0; i < numBounces; i++) {
        totalDistance += bouncinessIndex * startingHeight;
        startingHeight = firstBounceHeight;
        firstBounceHeight = bouncinessIndex * firstBounceHeight;
    }
    return totalDistance;
}

int main() {
    double startingHeight, firstBounceHeight;
    int numBounces;
    cin >> startingHeight >> firstBounceHeight >> numBounces;
    cout << bouncingBalls(startingHeight, firstBounceHeight, numBounces) << endl;
    return 0;
}
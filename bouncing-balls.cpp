#include <iostream>
#include <cmath>
using namespace std;

double bouncingBalls(double startingHeight, double heightAfterFirstBounce, int numBounces) {
    if (numBounces == 1) {
        return startingHeight;
    } else {
        return bouncingBalls(startingHeight * (heightAfterFirstBounce / startingHeight), heightAfterFirstBounce, numBounces - 1);
    }
}

int main() {
    double startingHeight, heightAfterFirstBounce;
    int numBounces;

    cin >> startingHeight >> heightAfterFirstBounce >> numBounces;

    cout << bouncingBalls(startingHeight, heightAfterFirstBounce, numBounces) << endl;

    return 0;
}